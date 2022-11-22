/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_double.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:19:26 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/22 08:48:46 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Converter.hpp"


static void to_char(double num)
{
    char c = static_cast<char>(num);
    std::cout << "  char : ";
    if (c >= 32 && c <= 126)
        std::cout << "'" << static_cast<char>(c) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}

static void to_int(double num)
{
    std::cout << "  int  : " << static_cast<int>(num) << std::endl;
}

static void to_float(double num)
{
    if (num - static_cast<int>(num) == 0)
        std::cout << " float : " << static_cast<int>(num) << ".0f" << std::endl;
    else
        std::cout << " float : " << num << "f" << std::endl;
}

static void to_double(double num)
{
    if (num - static_cast<int>(num) == 0)
        std::cout << "double : " << static_cast<int>(num) << ".0" << std::endl;
    else
        std::cout << "double : " << num << std::endl;
}

void Convert_Double(std::string const arg)
{
    double number;
    number = std::stod(arg.c_str());
    to_char(number);
    to_int(number);
    to_float(number);
    to_double(number);
}
