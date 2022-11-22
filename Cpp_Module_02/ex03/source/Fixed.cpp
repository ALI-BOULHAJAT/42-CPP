    /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 04:59:06 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/09 04:59:28 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int const       Fixed::_n_fractional_bits = 8;

Fixed::Fixed():
_fixed_point(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(Fixed const &fixed) {*this = fixed;}

int Fixed::getRawBits(void) const {return(this->_fixed_point);}

void Fixed::setRawBits(int const raw) {this->_fixed_point = raw;}

Fixed   &Fixed::operator=(Fixed const &fixed)
{
    this->setRawBits(fixed._fixed_point);
    return(*this);
}

Fixed::Fixed(const float value)
{
    float   fixed_float;

    fixed_float = value * (1 << Fixed::_n_fractional_bits);
    this->_fixed_point = roundf(fixed_float);
}

Fixed::Fixed(const int value)
{
    int     fixed_int;

    fixed_int = value * (1 << Fixed::_n_fractional_bits);
    this->setRawBits(fixed_int);
}


float   Fixed::toFloat(void) const
{
    float   fl;

    fl = static_cast<float>(this->_fixed_point) / (1 << Fixed::_n_fractional_bits);
    return (fl);
}

int   Fixed::toInt(void) const {return (this->_fixed_point >> Fixed::_n_fractional_bits);}

std::ostream    &operator<<(std::ostream &new_out, Fixed const &fixed)
{
    new_out << fixed.toFloat();
    return (new_out);
}

/// ADD ///

bool   Fixed::operator<(Fixed const &fixed) const
{
    return (this->_fixed_point < fixed._fixed_point);
}

bool   Fixed::operator>(Fixed const &fixed) const
{
    return (this->_fixed_point > fixed._fixed_point);
}

bool   Fixed::operator<=(Fixed const &fixed) const
{
    return ((this->_fixed_point < fixed._fixed_point) || (this->_fixed_point == fixed._fixed_point));
}

bool   Fixed::operator>=(Fixed const &fixed) const
{
    return ((this->_fixed_point > fixed._fixed_point) || (this->_fixed_point == fixed._fixed_point));
}

bool   Fixed::operator==(Fixed const &fixed) const
{
    return (this->_fixed_point == fixed._fixed_point);
}

bool   Fixed::operator!=(Fixed const &fixed) const
{
    return (this->_fixed_point != fixed._fixed_point);
}

Fixed   Fixed::operator+(Fixed const &fixed)
{
    return (Fixed((this->_fixed_point + fixed._fixed_point) / (float)(1 << _n_fractional_bits)));
}

Fixed   Fixed::operator-(Fixed const &fixed)
{
    return (Fixed((this->_fixed_point - fixed._fixed_point) / (float)(1 << _n_fractional_bits)));
}

Fixed   Fixed::operator/(Fixed const &fixed)
{
    return (Fixed((this->_fixed_point / (float)(1 << _n_fractional_bits)) / (fixed._fixed_point/ (float)(1 << _n_fractional_bits))));
}

Fixed   Fixed::operator*(Fixed const &fixed)
{
    return (Fixed((this->_fixed_point / (float)(1 << _n_fractional_bits)) * (fixed._fixed_point/ (float)(1 << _n_fractional_bits))));
}

Fixed   Fixed::operator++(void)
{
    this->_fixed_point++;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed   tmp = *this;

    this->_fixed_point++;
    return (tmp);
}

Fixed   Fixed::operator--(void)
{
    this->_fixed_point--;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed   tmp = *this;

    this->_fixed_point--;
    return (tmp);
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
    if (fixed1 < fixed2)
        return(fixed1);
    return (fixed2);
}

Fixed &Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
    if (fixed1 < fixed2)
        return((Fixed&) fixed1);
    return ((Fixed&) fixed2);
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
    if (fixed1 > fixed2)
        return(fixed1);
    return (fixed2);
}

Fixed &Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
    if (fixed1 > fixed2)
        return((Fixed&) fixed1);
    return ((Fixed&) fixed2);
}
