/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:44:39 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/13 04:55:55 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->_name = "ScavTrap";
    this->_energy = 50;
    this->_health = 100;
    this->_damage = 20;
    std::cout << "ScavTrap : Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->_energy = 50;
    this->_health = 100;
    this->_damage = 20;
    this->_name = name;
    std::cout << "ScavTrap : Copy constructor called" << std::endl;
}


ScavTrap &ScavTrap::operator=(ScavTrap const &scavtrap)
{
    this->_name = scavtrap._name;
    this->_health = scavtrap._health;
    this->_energy = scavtrap._energy;
    this->_damage = scavtrap._damage;
    std::cout << "ScavTrap : Copy assignment operator called" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap : Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energy > 0)
    {
        this->_energy -= 1;
        std::cout << "ScavTrap : " << this->_name <<  " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
        this->_damage += 1;
    }
    else
        std::cout << this->get_name() << " don't have enough energy to attack " << target << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap : " << this->_name << " switched to gatekeeper mode" << std::endl;
}
