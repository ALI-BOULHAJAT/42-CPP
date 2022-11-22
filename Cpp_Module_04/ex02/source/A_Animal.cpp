/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:21:42 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/07 00:29:29 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/A_Animal.hpp"

A_Animal::A_Animal(void): _type("Animal")
{
    std::cout << this->_type << " : Default constructor called" << std::endl;
}

A_Animal::A_Animal(A_Animal const &animal)
{
    this->_type = animal._type;
    std::cout << this->_type << " : copy constructor called" << std::endl;
}

A_Animal &A_Animal::operator=(A_Animal const &animal)
{
    this->_type = animal._type;
    return (*this);
}

A_Animal::~A_Animal(void)
{
    std::cout << this->_type << " : Destructor called" << std::endl;
}

A_Animal::A_Animal(std::string const &type): _type(type)
{
    std::cout << this->_type << " : constractor called" << std::endl;
}

std::string A_Animal::getType(void) const
{
    return (this->_type);
}