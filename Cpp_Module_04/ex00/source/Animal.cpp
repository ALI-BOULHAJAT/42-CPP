/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 07:22:40 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/06 22:51:18 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal(void): _type("Animal")
{
    std::cout << "Animal : Default constructor called" << std::endl;
}

Animal::Animal(Animal const &animal)
{
    *this = animal;
    std::cout << "Animal : copy constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &animal)
{
    this->_type = animal._type;
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << "Animal : Destructor called" << std::endl;
}

Animal::Animal(std::string const &type): _type(type)
{
    std::cout << "Animal : constractor called" << std::endl;
}

void Animal::makeSound(void)
{
    std::cout << "Animal : sound not specifed" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}