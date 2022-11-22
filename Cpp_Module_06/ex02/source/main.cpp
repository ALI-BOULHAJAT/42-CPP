/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 04:09:22 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/14 05:19:30 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"

int main ()
{
    Base *my_ptr;

    my_ptr = generate();
    identify(my_ptr);
    identify(*my_ptr);
    return (0);
}