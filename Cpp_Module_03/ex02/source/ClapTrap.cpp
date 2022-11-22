/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:45:37 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/13 03:05:38 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap():_name("ClapTrap")  ,_health(10), _energy(10), _damage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _health(10), _energy(10), _damage(0)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_name = name;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &claptrap)
{
    this->_name = claptrap._name;
    this->_health = claptrap._health;
    this->_energy = claptrap._energy;
    this->_damage = claptrap._damage;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energy > 0)
    {
        this->_energy -= 1;
        std::cout << "ClapTrap " << this->_name <<  " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
        this->_damage += 1;
    }
    else
        std::cout << this->get_name() << " don't have enough energy to attack " << target << std::endl;
}

std::string ClapTrap::get_name()
{
    return (this->_name);
}

void ClapTrap::setDamage(unsigned int damage)
{
    this->_damage = damage;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_health > (int)amount)
    {
        this->_health -= amount;
        std::cout << this->get_name() << " was attacked and lost " << amount << " of Hit points" << std::endl;
    }
    else
    {
        std::cout << this->get_name() << " dead" << std::endl;
        this->_health = 0;   
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_health == 0)
    {
        std::cout << RED << this->get_name() << " can't be Repaired, already dead" << END_CLR << std::endl;
        return ;
    }
    else if (this->_energy > 0)
    {
        this->_health += amount;
        if (this->_health > 10)
            this->_health = 10;
        this->_energy -= 1;
        this->_damage += 1;
        std::cout << this->get_name() << " was repaired and get " << this->_health << " hit points back" << std::endl;
    }
    else
        std::cout << this->get_name() << " don't have enough energy to Repaired " << std::endl;
}

int ClapTrap::get_damage()
{
    return (this->_damage);
}

void    ClapTrap::get_status(void)
{
    if (this->_health > 0)
    {
        std::cout << BLUE << this->_name;
        std::cout << GREEN << "\n  -> HP = " << this->_health << "\n  -> EP = " << this->_energy << END_CLR << std::endl;
    }
    else
    {
        std::cout << RED << this->_name;
        std::cout << "\n  -> DEAD" << END_CLR << std::endl;
    }
    return ;
}
