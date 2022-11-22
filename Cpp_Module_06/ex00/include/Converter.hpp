/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:03:39 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/13 07:14:41 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <stdexcept>
#include <iostream>
#define BLUE "\x1b[36m"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define MAUVE "\x1b[33m"
#define END_CLR "\033[0m"

enum
{
    NDFN = 50,
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    PLUS,
    MINUS,
    NSIGN
};


class Converter
{
    private:
        int _type;
        int _dot;
        int _float;
        int _sign;
    public:
        Converter(void);
        Converter(Converter const &src);
        Converter &operator=(Converter const &src);
        ~Converter(void);

        class ArgumentNoValid: public std::runtime_error
        {
            public:
                ArgumentNoValid(void);
        };

        class ArgumentNumber: public std::runtime_error
        {
            public:
                ArgumentNumber(void);
        };

        class MaxValue: public std::runtime_error
        {
            public:
                MaxValue();
        };

        class MinValue: public std::runtime_error
        {
            public:
                MinValue();
        };
        
        Converter(std::string arg);
        void check_arg(std::string arg);
        void is_number(std::string arg);
        int check_caracter(std::string const arg, char caracter);
        int check_sign(std::string const arg);
        int special(std::string const arg);
};


void Convert_Char(std::string arg);
void Convert_Int(std::string const arg);
void Convert_Double(std::string const arg);
void Convert_Float(std::string const arg);

void display_nan(void);
void display_m_inf(void);
void display_p_inf(void);


#endif