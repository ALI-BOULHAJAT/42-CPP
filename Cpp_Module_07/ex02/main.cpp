/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:59:14 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/18 03:01:45 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

#define MAX_VAL 750
int main()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << RED << "Error : didn't save the same value!!" << END_CLR << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << "Error : " << e.what() << END_CLR << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << "Error : " << e.what() << END_CLR << '\n';
    }
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     std::cout << numbers[i] << std::endl;
    // }
    delete [] mirror;
    return 0;
}

/*  ------- test 2 ------- */



#define NUM 10

int _main2()
{
    
    try
    {
        Array<char>  alpha(NUM);
        for (int i = 0; i < NUM ; i++)
            alpha[i] = 'a' + i;
        for (int i = 0; i < NUM; i++)
            std::cout << alpha[i] << ".";
        std::cout << std::endl;
        std::cout << alpha.size() << std::endl;
        Array<char> c_alpha;

        c_alpha = alpha;
        for (int i = 0; i < NUM; i++)
            std::cout << c_alpha[i] << ".";
        std::cout << std::endl;
        std::cout << c_alpha.size();
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << "\nError : " << e.what() << END_CLR << '\n';
        return (1);
    }
    return (0);
}


// int main()
// {
//     try
//     {
//         Array<char> test(0);
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
    
// }