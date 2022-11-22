/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:19:08 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/09/27 17:39:57 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

const	std::string &Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}