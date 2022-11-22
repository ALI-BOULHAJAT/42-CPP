/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_float.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 04:29:57 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/22 08:49:11 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Converter.hpp"


static void to_char(float num)
{
    char c = static_cast<char>(num);
    std::cout << "  char : ";
    if (c >= 32 && c <= 126)
        std::cout << "'" << static_cast<char>(c) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}

static void to_int(float num)
{
    std::cout << "  int  : " << static_cast<int>(num) << std::endl;
}

static void to_float(float num)
{
    if (num - static_cast<int>(num) == 0)
        std::cout << " float : " << static_cast<int>(num) << ".0f" << std::endl;
    else
        std::cout << " float : " << num << "f" << std::endl;
}

static void to_double(float num)
{
    if (num - static_cast<int>(num) == 0)
        std::cout << "double : " << static_cast<int>(num) << ".0" << std::endl;
    else
        std::cout << "double : " << num << std::endl;
}

void Convert_Float(std::string const arg)
{
    float number;
    number = std::stof(arg.c_str());
    to_char(number);
    to_int(number);
    to_float(number);
    to_double(number);
}
