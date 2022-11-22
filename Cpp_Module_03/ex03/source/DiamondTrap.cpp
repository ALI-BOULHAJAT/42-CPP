/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 04:41:56 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/13 02:31:00 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"
#include "../include/ScavTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
    this->_name = name;
    this->_damage = 30;
    this->_energy = 50;
    this->_health = 100;
    std::cout << "DiamondTrap : Copy constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(void) :
    _name("diamond_trap")
{
    this->_damage = 30;
    this->_energy = 50;
    this->_health = 100;
    std::cout << "DiamondTrap : Default constructor called" << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap : Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &diamondtrap)
{
    this->_name = diamondtrap._name;
    this->_health = diamondtrap._health;
    this->_energy = diamondtrap._energy;
    this->_damage = diamondtrap._damage;
    std::cout << "DiamondTrap : Copy assignment operator called" << std::endl;
    return (*this);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "Who Am I : " << this->_name << " --> " << this->ClapTrap::get_name() << std::endl;
}