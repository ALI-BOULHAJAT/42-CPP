/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:22:00 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/07 00:30:48 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(void): A_Animal("cat"), _brain(new Brain())
{
    std::cout << this->_type << " : Default constractor called" << std::endl;
}

Cat::Cat(Cat const &cat): A_Animal(cat), _brain(new Brain())
{
    std::cout << this->_type << " : copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &cat)
{
    this->_type = cat._type;
    delete this->_brain;
    this->_brain = new Brain();
    *this->_brain = *cat._brain;
    std::cout << this->_type << " : Copy assignment operator called" << std::endl;
    return (*this);
}

Cat::~Cat(void)
{
    delete this->_brain;
    std::cout << this->_type << " : Destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << this->_type << " : MEAOOO !!" << std::endl;
}
