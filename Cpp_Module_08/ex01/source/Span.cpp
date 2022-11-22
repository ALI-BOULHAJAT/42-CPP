/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:37:03 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/19 03:32:31 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span(void): _size(0), _variable(0) {}

Span::Span(Span const &src): _arr(src._arr), _size(src._size), _variable(src._variable) {}

Span &Span::operator=(Span const &src)
{
    if (this != &src)
    {
        if (this->_size != src._size)
            throw std::runtime_error("can't assign");
        this->_variable = src._variable;
        this->_arr = src._arr;
    }
    return (*this);
}

Span::~Span(void) {}

Span::Span(unsigned int size): _size(size),  _variable(0){}

void Span::addNumber(unsigned int number)
{
    if (_variable < _size)
    {
        _arr.push_back(number);
        _variable++;
    }
    else if (_size == 0)
        throw std::runtime_error("Size of Span is 0");
    else
        throw std::runtime_error("Span are already full");
}

int Span::shortestSpan(void)
{
    std::vector<int> tmp = this->_arr;
    if (_variable >= 2)
    {
        int distance = INT_MAX;
        std::sort(tmp.begin(), tmp.end());
        for (unsigned int i = 0; i + 1 < _variable; i++)
        {
            if ((tmp.at(i + 1) - tmp.at(i)) < distance)
                distance = tmp.at(i + 1) - tmp.at(i);
        }
        return (distance);
    }
    else
        throw std::runtime_error("No enough numbers to check");
}

int Span::longestSpan(void)
{
    if (_variable >= 2)
    {
        std::vector<int>::const_iterator v_min;
        std::vector<int>::const_iterator v_max;
        
        v_min = std::min_element(_arr.begin(), _arr.end());
        v_max = std::max_element(_arr.begin(), _arr.end());
        return (*v_max - *v_min);
    }
    else
        throw std::runtime_error("No enough numbers to check");
}

void Span::add_range(void)
{
    srand(time(NULL));
    for(unsigned int i = _variable; i < _size; i++)
    {
        int number = rand();
        _arr.push_back(number);
        _variable++;
    }
}

void Span::print(void)
{
    for (unsigned int i = 0; i < _variable; i++)
        std::cout << _arr.at(i) << " ";
}
