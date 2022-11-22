/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 22:33:00 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/18 02:05:28 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

//////////   char   /////

static void     increment(char &num)
{
    ++num;
}

static void     print(char &num)
{
    std::cout << num << std::endl;
}

// //////////   int   /////

static void     increment(int &num)
{
    ++num;
}

static void     print(int &num)
{
    std::cout << num << std::endl;
}

//////////   float (const)  /////

static void     print(float const &num)
{
    std::cout << num << std::endl;
}

//////////   char*  (const)  /////

static void print(std::string const &str)
{
    std::cout << str << std::endl;
}

int     main(void)
{
    char    arr1[] = {'a', 'b', 'c', 'd'};
    int     arr2[] = {20, 30, 40, 50};
    float   arr3[] = {0.0, 0.1, 0.2, 0.3};
    std::string arr4[] = {"name 1", "name 2", "name 3", "name 4"};
    std::cout << BLUE << "----- test char -----\n";
    iter(arr1, 4, &increment);
    iter(arr1, 4, &print);
    std::cout << GREEN << "----- test int -----\n";
    iter(arr2, 4, &increment);
    iter(arr2, 4, &print);
    std::cout << MAUVE << "----- test const float -----\n";
    iter(arr3, 4, &print);
    std::cout << BLUE << "----- test const string -----\n";
    iter(arr4, 4, &print);
    std::cout << END_CLR;
    return (0);
}
