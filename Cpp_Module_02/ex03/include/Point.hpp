/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:42:22 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/10 00:45:31 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"


class Point
{
    private:
        Fixed const _x;
        Fixed const _y;
    public:
        Point();
        Point(float const x, float const y);
        Point(Point const &point);
        Point &operator=(Point const &Point);
        ~Point();  
        float   get_x_point(void) const;
        float   get_y_point(void) const;
};

#endif