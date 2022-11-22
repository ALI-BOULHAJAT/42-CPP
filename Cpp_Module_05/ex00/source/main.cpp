/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 09:54:15 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/09 07:08:39 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main ()
{
    try
    {
        Bureaucrat me(3, "me");
        std::cout << me << std::endl;
        me.increment_grade();
        std::cout << me << std::endl;
        me.decrement_grade();
        std::cout << me << std::endl;
    }
    catch(const std::runtime_error& e)
    {
        std::cerr << RED << e.what() << END_CLR << std::endl;
        return (1);
    }
    return (0);
}
