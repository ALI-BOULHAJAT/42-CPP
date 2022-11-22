/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:33:02 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/07 01:29:35 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/ICharacter.hpp"

AMateria::AMateria(void)
{
    this->_type = "amateria";
}

AMateria::AMateria(AMateria const &amateria)
{
    this->_type = amateria._type;
}

AMateria::AMateria(std::string type)
{
    this->_type = type;
}

AMateria &AMateria::operator=(AMateria const &amateria)
{
    this->_type = amateria._type;
    return (*this);
}

std::string const &AMateria::get_type(void)
{
    return (this->_type);
}

AMateria::~AMateria(void) {}

void    AMateria::use(ICharacter& target)
{
    (void)target;
    std::cout << "* matetia used *" << std::endl;
    return ;
}
