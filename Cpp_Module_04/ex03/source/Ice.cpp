/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 05:33:02 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/03 09:13:02 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice(void): AMateria("ice") {}

Ice::Ice(Ice const &ice) : AMateria("ice")
{
    (void)ice;
    return ;
}

Ice &Ice::operator=(Ice const &ice)
{
    (void) ice;
    return (*this);
}

Ice::~Ice(void) {}

AMateria *Ice::clone(void) const
{
    return (new Ice());
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return ;
}