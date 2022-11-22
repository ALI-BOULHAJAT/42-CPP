/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:38:37 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/10 00:20:24 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int const       Fixed::_n_fractional_bits = 8;

Fixed::Fixed(): _fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
    return ;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixed_point = raw;
    return;
}

Fixed   &Fixed::operator=(Fixed const &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixed_point = fixed.getRawBits();
    return(*this);
}
