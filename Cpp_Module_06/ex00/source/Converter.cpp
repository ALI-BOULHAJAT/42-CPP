/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:59:38 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/22 08:45:39 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Converter.hpp"

Converter::ArgumentNoValid::ArgumentNoValid(void): std::runtime_error("Error : argument no valide") {}

Converter::ArgumentNumber::ArgumentNumber(void): std::runtime_error("Usage : ./convert [char] or [int] or [float] or [double]") {}

Converter::MaxValue::MaxValue(void): std::runtime_error("Error : Max Value") {}

Converter::MinValue::MinValue(void): std::runtime_error("Error : Min Value") {}

Converter::Converter(void): _type(NDFN), _dot(0), _float(0) {}

Converter::Converter(Converter const &src): _type(src._type), _dot(src._dot), _float(src._float) {}

Converter &Converter::operator=(Converter const &src)
{
    this->_type = src._type;
    this->_dot = src._dot;
    this->_float = src._float;
    return (*this);
}

void Converter::is_number(std::string arg)
{
    int i = 0;
    while(arg[i])
    {
        if (!isdigit(arg[i]) && arg[i] != 'f' && arg[i] != '.' && arg[i] != '-' && arg[i] != '+')
            throw Converter::ArgumentNoValid();
        i++;
    }
    this->_dot = check_caracter(arg, '.');
    this->_float = check_caracter(arg, 'f');
    this->_sign = check_sign(arg);
    if ((this->_sign == PLUS && arg.front() != '+') || (this->_sign == MINUS && arg.front() != '-') || this->_sign == 0)
        throw Converter::ArgumentNoValid();
    else if (this->_dot == 1)
    {
        if (this->_float == 1 && arg.back() == 'f')
            this->_type = FLOAT;
        else if (this->_float == -1)
            this->_type = DOUBLE;
        else
            throw Converter::ArgumentNoValid();
    }
    else if (this->_dot == -1 && this->_float == -1)
        this->_type =  INT;
    else
        throw Converter::ArgumentNoValid();
    if (atoll(arg.c_str()) > 2147483647)
        throw Converter::MaxValue();
    if (atoll(arg.c_str()) < -2147483648)
        throw Converter::MinValue();
}

Converter::~Converter(void) {}

int Converter::check_caracter(std::string const arg, char caracter)
{
    int index = 0;
    int count = 0;
    index = arg.find(caracter, index);
    while(index != -1)
    {
        index++;
        count++;
        index = arg.find(caracter, index);
    }
    if (count == 0)
        return (-1);
    else if (count == 1)
        return (1);
    else
        return (0);
}

int Converter::check_sign(std::string const arg)
{
    int index = 0;
    int plus = 0;
    int minus = 0;
    index = arg.find('-', index);
    while(index != -1)
    {
        index++;
        minus++;
        index = arg.find('-', index);
    }
    index = 0;
    index = arg.find('+', index);
    while(index != -1)
    {
        index++;
        plus++;
        index = arg.find('+', index);
    }
    if (minus == 1 && plus == 0)
        return (MINUS);
    else if (minus == 0 && plus == 1)
        return (PLUS);
    else if (minus == 0 && plus == 0)
        return (NSIGN);
    else
        return (0);
}

void Converter::check_arg(std::string arg)
{
    if (!isdigit(arg[0]) && strlen(arg.c_str()) == 1)
        this->_type = CHAR;
    else
        this->is_number(arg);
}

int Converter::special(std::string const arg)
{
    if (!strcmp("nan", arg.c_str()) || !strcmp("nanf", arg.c_str()))
        display_nan();
    else if (!strcmp("-inf", arg.c_str()) || !strcmp("-inff", arg.c_str()))
        display_m_inf();
    else if (!strcmp("+inf", arg.c_str()) || !strcmp("+inff", arg.c_str()))
        display_p_inf();
    else
        return (0);
    return (1);
}

Converter::Converter(std::string arg)
{
    if (!special(arg))
    {
        check_arg(arg);
        switch (this->_type)
        {
        case CHAR:
            Convert_Char(arg);
            break;
        case INT:
            Convert_Int(arg);
            break;
        case DOUBLE:
            Convert_Double(arg);
            break;
        case FLOAT:
            Convert_Float(arg);
        default:
            break;
        }
    }
}