/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:30:12 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/19 04:46:56 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#define BLUE "\x1b[36m"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define MAUVE "\x1b[33m"
#define END_CLR "\033[0m"

class Span
{
    private:
        std::vector<int> _arr;
        unsigned int _size;
        unsigned int _variable;
        
    public:
        Span(void);
        Span(Span const &src);
        Span &operator=(Span const &src);
        ~Span(void);

        Span(unsigned int size);
        void addNumber(unsigned int size);
        int shortestSpan(void);
        int longestSpan(void);
        void add_range(void);
        void print(void);
};

#endif