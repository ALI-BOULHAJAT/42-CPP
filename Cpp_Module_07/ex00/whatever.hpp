/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:37:29 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/18 02:01:58 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T &a, T &b)
{
    T   tmp;
    tmp = a;
    a = b;
    b = tmp;
    return ;
}

template<typename T>
T min(T &a, T &b)
{
    if (a >= b)
        return (b);
    return (a);
}

template<typename T>
T max(T &a, T &b)
{
    if (a > b)
        return (a);
    return (b);
}

#endif