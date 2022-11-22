/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 06:06:44 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/20 22:51:28 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include "easyfind.hpp"

template<typename T>
int  easyfind(T const &content, int value)
{
    typename T::const_iterator v_find;
    
    v_find = std::find(content.begin(), content.end(), value);
    if (v_find == content.end())
        throw std::runtime_error("value not found");
    return (v_find - content.begin());
}


#endif