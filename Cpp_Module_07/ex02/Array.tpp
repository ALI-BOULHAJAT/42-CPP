/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 01:02:12 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/17 03:43:22 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <iostream>
#include <stdexcept>
#define BLUE "\x1b[36m"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define MAUVE "\x1b[33m"
#define END_CLR "\033[0m"

#define N 5

template<class T>
class Array
{
    private:
        size_t _size;
        T *_array;
    public:
        Array(): _size(0), _array(NULL) {};
        Array(unsigned int n): _size(n)
        {
            this->_array = new (std::nothrow) T[n];
            if (!this->_array)
                throw std::runtime_error("Bad allocation");
            bzero(this->_array, n * sizeof(T));
        }
        Array(Array const &src): _size(src._size)
        {
            this->_array = new (std::nothrow) T[this->_size];
            if (!this->_array)
                throw std::runtime_error("Bad allocation");
            for (size_t i = 0; i < this->_size; i++)
                this->_array[i] = src._array[i];
        }
        Array &operator=(Array const &src)
        {
            this->_size = src._size;
            delete [] this->_array;
            this->_array = new (std::nothrow) T[this->_size];
            if (!this->_array)
                throw std::runtime_error("Bad allocation");
            for (size_t i = 0; i < this->_size; i++)
                this->_array[i] = src._array[i];
            return (*this);
        }
        ~Array(void)
        {
            delete [] this->_array;
        }
        T &operator[](unsigned int index)
        {
            if (index < this->_size)
                return (this->_array[index]);
            throw std::runtime_error("Index out of range");
        }
        size_t size(void)
        {
            return (this->_size);
        }
};

#endif