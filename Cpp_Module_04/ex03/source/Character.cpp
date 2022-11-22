/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:27:45 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/07 01:21:57 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(void): _name("default"), _num_inventory(0)
{
    for(int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(std::string name): _name(name), _num_inventory(0)
{
    for(int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(Character const &character): _name(character._name), _num_inventory(character._num_inventory)
{
    for(int i = 0; i < 4; i++)
    {
        delete this->_inventory[i];
        if (character._inventory[i] != NULL)
            this->_inventory[i] = character._inventory[i];
        else
            this->_inventory[i] = NULL;
    }
    return ;
}

Character &Character::operator=(Character const &character)
{
    if (this != &character)
    {
        this->_num_inventory = character._num_inventory;
        this->_name = character._name;
        for(int i = 0; i < 4; i++)
        {
            if (character._inventory[i])
                this->_inventory[i] = character._inventory[i];
            else
                this->_inventory[i] = NULL;
        }
    }
    return (*this);
}

Character::~Character(void)
{
    for(int i = 0; i < 4; i++)
    {
        delete this->_inventory[i];
    }
}

void Character::equip(AMateria *m)
{
    if (this->_num_inventory < 4)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_inventory[i] == NULL)
            {
                this->_inventory[i] = m;
                (this->_num_inventory)++;
                return ;
            }
        }
    }
}

void Character::unequip(int idx)
{
    if (this->_num_inventory > 0)
    {
        this->_inventory[idx] = NULL;
        (this->_num_inventory)--;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (this->_inventory[idx] != NULL)
        this->_inventory[idx]->use(target);
}

std::string const &Character::getName() const
{
    return (this->_name);
}

AMateria *Character::get_Materia(unsigned int idx) const
{
    if (this->_num_inventory > idx)
        return (this->_inventory[idx]);
    return (NULL);
}