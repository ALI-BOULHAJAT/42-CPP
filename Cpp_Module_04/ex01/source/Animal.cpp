/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:21:42 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/01 03:59:30 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal(void): _type("Animal")
{
    std::cout << this->_type << " : Default constructor called" << std::endl;
}

Animal::Animal(Animal const &animal)
{
    this->_type = animal._type;
    std::cout << this->_type << " : copy constructor called" << std::endl;
}

Animal::Animal(std::string const &type): _type(type)
{
    std::cout << this->_type << " : constractor called" << std::endl;
}

Animal &Animal::operator=(Animal const &animal)
{
    this->_type = animal._type;
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << this->_type << " : Destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << this->_type << " : Animal sound" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}