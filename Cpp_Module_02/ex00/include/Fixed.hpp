/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:54:53 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/07 14:59:45 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int                 _fixed_point;
        static int const    _n_fractional_bits;
    public:
        Fixed();
        Fixed(Fixed const &fixed);
        Fixed &operator= (Fixed const &Fixed); 
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif
