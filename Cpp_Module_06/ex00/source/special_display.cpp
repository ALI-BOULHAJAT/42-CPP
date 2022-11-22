/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_display.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 05:02:03 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/13 06:08:39 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Converter.hpp"

void display_nan(void)
{
    std::cout << "  char : impossible" << std::endl;
    std::cout << "  int  : impossible" << std::endl;
    std::cout << " float : nanf" << std::endl;
    std::cout << "double : nan" << std::endl;
}

void display_m_inf(void)
{
    std::cout << "  char : impossible" << std::endl;
    std::cout << "  int  : impossible" << std::endl;
    std::cout << " float : -inff" << std::endl;
    std::cout << "double : -inf" << std::endl;
}

void display_p_inf(void)
{
    std::cout << "  char : impossible" << std::endl;
    std::cout << "  int  : impossible" << std::endl;
    std::cout << " float : +inff" << std::endl;
    std::cout << "double : +inf" << std::endl;
}