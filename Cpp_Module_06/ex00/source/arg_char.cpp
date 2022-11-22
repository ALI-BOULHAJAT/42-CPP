/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_char.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:11:13 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/22 08:47:03 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Converter.hpp"

static void to_char(char caracter)
{
    char c = static_cast<char>(caracter);
    std::cout << "  char : ";
    if (isprint(c))
        std::cout << "'" << c << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;       
}

static void to_int(char c)
{
    std::cout << "  int  : " << static_cast<int>(c) << std::endl;
}

static void to_float(char c)
{
    std::cout << " float : " << static_cast<float>(c) << ".0f" << std::endl;
}

static void to_double(char c)
{
    std::cout << "double : " << static_cast<double>(c) << ".0" << std::endl;
}

void Convert_Char(std::string const arg)
{
    char c;
    c = arg.front();
    to_char(c);
    to_int(c);
    to_float(c);
    to_double(c);
}

