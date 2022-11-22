/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bcp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 05:18:29 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/09 23:47:58 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

static float    surface(Point const &p1, Point const &p2, Point const &p3)
{
        float   x1, x2, x3;
        float   y1, y2, y3;
        float   area;

        x1 = p1.get_x_point();
        x2 = p2.get_x_point();
        x3 = p3.get_x_point();
        y1 = p1.get_y_point();
        y2 = p2.get_y_point();
        y3 = p3.get_y_point();
        area = fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;
        return (area);
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    float   area_1, area_2, area_3;
    float   area;

    area = surface(a, b, c);
    area_1 = surface(a, b, point);
    area_2 = surface(b, c, point);
    area_3 = surface(a, c, point);
    if (area_1 == 0 || area_2 == 0 || area_3 == 0)
        return (false);
    return (area_1 + area_2 + area_3 == area);
}
