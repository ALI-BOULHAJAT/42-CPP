/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 06:11:43 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/21 00:33:13 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(void) {}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &src): std::stack<T>(src) {}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &src)
{
    if (this != &src)
        std::stack<T>::operator=(src);
    return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack(void) {}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void) 
{
    return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void) 
{
    return (this->c.end());
}

#endif
