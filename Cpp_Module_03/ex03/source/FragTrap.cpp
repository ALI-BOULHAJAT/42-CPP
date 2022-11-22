/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 06:16:30 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/18 10:56:08 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap()
{
    this->_name = "FragTrap";
    this->_energy = 100;
    this->_health = 100;
    this->_damage = 30;
    std::cout << "FragTrap : Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->_energy = 100;
    this->_health = 100;
    this->_damage = 30;
    this->_name = name;
    std::cout << "FragTrap : Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap : Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &fragtarp)
{
    this->_name = fragtarp._name;
    this->_health = fragtarp._health;
    this->_energy = fragtarp._energy;
    this->_damage = fragtarp._damage;
    std::cout << "FragTrap : Copy assignment operator called" << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap : " << this->get_name() << " high fives !!" << std::endl;
}
