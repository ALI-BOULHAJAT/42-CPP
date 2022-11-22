/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 08:37:42 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/19 09:01:17 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog(void)
{
    this->_type = "Dog";
    std::cout << "Dog : Default constractor called" << std::endl;
}

Dog::Dog(Dog const &dog)
{
    this->_type = dog._type;
    std::cout << "Dog : copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &dog)
{
    this->_type = dog._type;
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Dog : Destructor called" << std::endl;
}

void Dog::makeSound(void)
{
    std::cout << "Dog : Barking !!!" << std::endl;
}