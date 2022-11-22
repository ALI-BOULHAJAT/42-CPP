/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:46:43 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/09 08:06:50 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

#define CNTR_D "\x1b[31m Exit \033[0m\n"
#define NOT_DIGIT "\x1b[31m Error: not digit\033[0m\n"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

float ft_input(void)
{
    float value;
    std::string line;
    std::getline(std::cin, line);
    
    if (line[0] == '\0')
    {
        std::cout << CNTR_D;
        exit(1);
    }
    for (int i = 0; i < (int)line.length(); i++)
    {
        if (std::isdigit(line[i]) == 0 && line[i] != '.')
        {
            std::cout << NOT_DIGIT;
            exit (1);
        }
    }
    value = atof(line.c_str());
    return (value);
}

int     main(void)
{
    float   X1, X2, X3, X_point;
    float   Y1, Y2, Y3, Y_point;

    std::cout <<"A.x = ";
    X1 = ft_input();
    std::cout << "A.y = ";
    Y1 = ft_input();
    std::cout << "B.x = ";
    X2 = ft_input();
    std::cout << "B.y = ";
    Y2 = ft_input();
    std::cout << "C.x = ";
    X3 = ft_input();
    std::cout << "C.y = ";
    Y3 = ft_input();
    std::cout << "P.x = ";
    X_point = ft_input();
    std::cout << "P.y = ";
    Y_point = ft_input();

    
    Point   a(X1, Y1);
    Point   b(X2, Y2);
    Point   c(X3, Y3);
    Point   p(X_point, Y_point);

    if (bsp(a, b, c, p) == true)
        std::cout << "\033[1;32m" << "-> Point P" << "(" << X_point << "," << Y_point << ") " << "is in the triangle\033[0m\n";
    else
        std::cout << "\033[1;31m" << "-> Point P" << "(" << X_point << "," << Y_point << ") " << "is not in the triangle\033[0m\n";
    return (0);
}