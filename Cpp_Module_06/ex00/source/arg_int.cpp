/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_int.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:14:54 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/22 08:48:10 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Converter.hpp"

static void to_char(int num)
{
    char c = static_cast<char>(num);
    std::cout << "  char : ";
    if (isprint(c))
        std::cout << "'" << static_cast<char>(c) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}

static void to_int(int num)
{
    std::cout << "  int  : " << num << std::endl;
}

static void to_float(int num)
{
    std::cout << " float : " << num << ".0f" << std::endl;
}

static void to_double(int num)
{
    std::cout << "double : " << num << ".0" << std::endl;
}

void Convert_Int(std::string const arg)
{
    int number;
    number = std::atoi(arg.c_str());
    to_char(number);
    to_int(number);
    to_float(number);
    to_double(number);
}
