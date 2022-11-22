/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:37:11 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/20 01:15:24 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int                 _fixed_point;
        static int const    _n_fractional_bits;
    public:
        Fixed();
        Fixed(Fixed const &fixed);
        Fixed &operator=(Fixed const &Fixed); 
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
//ADD
        Fixed(const int value);
        Fixed(const float value);
        float   toFloat(void) const;
        int     toInt(void) const;
        
};

std::ostream    &operator<<(std::ostream &out, Fixed const &fixed);

#endif