/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:01:49 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/13 06:17:37 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Converter.hpp"

int main(int ac, char **av)
{
    try
    {
        if (ac != 2)
            throw Converter::ArgumentNumber();
        else
            Converter my_converter(av[1]);
    }
    catch(const std::runtime_error& error)
    {
        std::cerr << RED << error.what() << '\n';
        return (1);
    }
    return (0);
}