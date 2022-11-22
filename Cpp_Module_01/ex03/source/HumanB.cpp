/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:07:00 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/04 14:06:06 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

void	HumanB::attack(void)
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &Weapon)
{
	this->_weapon = &Weapon;
}