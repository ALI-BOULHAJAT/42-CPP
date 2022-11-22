/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 06:42:06 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/07 02:07:41 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/MateriaSource.hpp"
#include "../include/Cure.hpp"
#include "../include/Ice.hpp"
#include "../include/Character.hpp"
#include "../include/ICharacter.hpp"


int main()
{
    {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    std::cout << me->getName() << std::endl;
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    }
    std::cout << "\n\n--------- test 2 ---------\n\n\n";
    {
     ICharacter      *me = new Character("me");
     AMateria        *tmp;

     me->equip(new Ice());
     me->equip(new Cure());
     tmp = me->get_Materia(1);
     ICharacter* bob = new Character("bob");
     tmp->use(*bob);
     me->unequip(0);
     me->unequip(1);
     delete tmp;
     delete me;
    }
     return (0);
}