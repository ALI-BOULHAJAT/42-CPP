/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:01:13 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/21 00:42:17 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "the Shortest Span is : " << sp.shortestSpan() << std::endl;
        std::cout << "the longest Span is : " << sp.longestSpan() << std::endl;
        std::cout << BLUE << "the contents of the Span:\n";
        sp.print();
        std::cout << END_CLR;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << "Error : " << e.what() << '\n' << END_CLR;
    }
    return (0);
}

// int main()
// {
//     try
//     {
//         Span long_sp = Span(10000000);
//         long_sp.add_range();
//         // long_sp.print();
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << RED << "Error : " << e.what() << '\n' << END_CLR;
//     }
//     return (0);
// }
