/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 02:44:24 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/10 00:50:12 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Point::Point(): _x(0), _y(0) {}

Point::Point(float const x, float const y): _x(Fixed(x)), _y(Fixed(y)) {}

Point::Point(Point const &point): _x(Fixed(point._x)), _y(Fixed(point._y)) {}

Point   &Point::operator=(Point const &point)
{
    (void)point;
    return (*this);
}

Point::~Point() {}

float   Point::get_x_point(void) const
{
        return (this->_x.toFloat());
}

float   Point::get_y_point(void) const
{
        return (this->_y.toFloat());
}