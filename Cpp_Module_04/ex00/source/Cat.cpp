/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 07:49:57 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/19 09:01:14 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(void)
{
    this->_type = "Cat";
    std::cout << "Cat : Default constractor called" << std::endl;
}

Cat::Cat(Cat const &cat)
{
    this->_type = cat._type;
    std::cout << "Cat : copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &cat)
{
    this->_type = cat._type;
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Cat : Destructor called" << std::endl;
}

void Cat::makeSound(void)
{
    std::cout << "Cat : MEAOOO !!" << std::endl;
}
