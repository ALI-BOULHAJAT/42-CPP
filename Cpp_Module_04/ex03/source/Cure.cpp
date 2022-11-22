/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:03:54 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/02 06:58:15 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure(void): AMateria("cure") {}

Cure::Cure(Cure const &cure): AMateria("cure")
{
    (void)cure;
    return;
}

Cure::~Cure(void) {}

Cure &Cure::operator=(Cure const &cure)
{
    (void)cure;
    return (*this);
}

AMateria *Cure::clone(void) const
{
    return (new Cure());
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    return ;
}
