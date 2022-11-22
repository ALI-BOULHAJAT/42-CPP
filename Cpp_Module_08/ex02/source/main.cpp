/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 06:20:44 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/21 00:45:51 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    MutantStack<int> c_mstack;
    c_mstack = mstack;
    MutantStack<int>::iterator c_it = c_mstack.begin();
    MutantStack<int>::iterator c_ite = c_mstack.end();
    std::cout << "content stack 1:\n";
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << "\n----------\n";
    std::cout << "content stack 2:\n";
    while (c_it != c_ite)
    {
        std::cout << *c_it <<" ";
        ++c_it;
    }
    std::stack<int> s(mstack);
    return 0;
}
