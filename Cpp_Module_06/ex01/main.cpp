/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 01:54:00 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/14 03:56:10 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main ()
{
    Data my_value = {.number = 1, .str = "Amanda"};
    uintptr_t raw;
    Data *ptr;

    raw = serialize(&my_value);
    std::cout << raw << std::endl;
    ptr = deserialize(raw);
    std::cout << "the name of raw is -> " << ptr->str << " <- and the number is " << ptr->number << std::endl;
    return (0);
}