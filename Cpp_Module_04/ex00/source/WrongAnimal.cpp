/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:05:27 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/19 09:02:08 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _wrong_type("WrongAnimal")
{
    std::cout << "WrongAnimal : Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &WrongAnimal): _wrong_type(WrongAnimal._wrong_type)
{
    std::cout << "WrongAnimal : copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &WrongAnimal)
{
    this->_wrong_type = WrongAnimal._wrong_type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal : Destructor called" << std::endl;
}

void WrongAnimal::makeWrSound(void)
{
    std::cout << "WrongAnimal : sound not specifed" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->_wrong_type);
}