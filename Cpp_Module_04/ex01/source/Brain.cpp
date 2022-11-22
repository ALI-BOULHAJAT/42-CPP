/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:54:37 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/01 05:17:16 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
    bzero(this->_ideas, sizeof(std::string) * 100);
    std::cout << "Brain : Default constractor called" << std::endl;
}

Brain::Brain(Brain const &brain)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = brain._ideas[i];
    std::cout << "Brain : copy constructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &brain)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = brain._ideas[i];
    std::cout << "Brain : Copy assignment operator called" << std::endl;
    return(*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain : Destractor called" << std::endl;
}