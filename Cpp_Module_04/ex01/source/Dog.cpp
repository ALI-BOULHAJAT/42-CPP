/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:56:00 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/06 23:32:45 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog(void) : Animal("dog"), _brain(new Brain())
{
    std::cout << this->_type << " : Default constractor called" << std::endl;
}

Dog::Dog(Dog const &dog): Animal(dog), _brain(new Brain())
{
    std::cout << this->_type << " : copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &dog)
{
    this->_type = dog._type;
    delete this->_brain;
    this->_brain = new Brain();
    *this->_brain = *dog._brain;
    std::cout << this->_type << " : Copy assignment operator called" << std::endl;
    return (*this);
}


Dog::~Dog(void)
{
    std::cout << this->_type << " : Destructor called" << std::endl;
    delete this->_brain;
}

void Dog::makeSound(void) const
{
    std::cout << this->_type << " : Barking !!!" << std::endl;
}

