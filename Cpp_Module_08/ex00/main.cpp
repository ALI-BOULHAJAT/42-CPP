/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:12:48 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/21 00:37:56 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main ()
{
    int v_index;

    try
    {
        std::vector<int>   test_arr;
        for (int i = 0; i <= 4; i++)
            test_arr.push_back(i * 2);
        v_index = easyfind(test_arr, 8);
    }
    catch (std::runtime_error const &error)
    {
        std::cerr << error.what() << std::endl;
        return (1);
    }
    std::cout << "the index of your value in the container is : " << v_index << std::endl;
    return (0);
}
