/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:31:48 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/18 02:03:07 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#define BLUE "\x1b[36m"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define MAUVE "\x1b[33m"
#define END_CLR "\033[0m"

template<typename T>
void iter(T *array, int length, void (*f)(T &))
{
    if (array)
    {
        for (int i = 0; i < length; i++)
            f(array[i]);
    }
}

template<typename T>
void iter(T *array, int length, void (*f)(T const &))
{
    if (array)
    {
        for (int i = 0; i < length; i++)
            f(array[i]);
    }
}

#endif