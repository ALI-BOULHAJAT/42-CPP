/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:27:53 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/07 01:20:22 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *_inventory[4];
        unsigned int _num_inventory;
        
    public:
        Character(void);
        Character(Character const &character);
        Character &operator=(Character const &character);
        ~Character(void);

        Character(std::string name);
        virtual std::string const &getName(void) const;
        virtual void equip(AMateria *m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter &target);
        AMateria    *get_Materia(unsigned int idx) const;
};

#endif