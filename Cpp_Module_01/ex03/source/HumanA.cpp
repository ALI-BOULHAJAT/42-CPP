/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:06:33 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/04 14:06:02 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"
#include "../include/Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon):
	_weapon(Weapon)
{
	this->_name = name;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}