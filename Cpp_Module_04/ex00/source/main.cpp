/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:02:27 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/06 23:46:46 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main()
{
    {
    Animal* all_animal = new Animal();
    Animal* new_dog = new Dog();
    Animal* new_cat = new Cat();
    std::cout << "the type of cat's class " << new_cat->getType() << " " << std::endl;
    std::cout << "the type of dog's class " << new_dog->getType() << " " << std::endl;
    new_cat->makeSound();
    new_dog->makeSound();
    all_animal->makeSound();
    delete all_animal;
    delete new_dog;
    delete new_cat;
    }

    std::cout << "\n*** -> second test for Wrong animal and cat <- ***\n" << std::endl;

    {
    WrongAnimal* Wr_animal = new WrongAnimal();
    WrongAnimal* Wr_cat = new WrongCat();
    Wr_cat->makeWrSound();
    Wr_animal->makeWrSound();
    delete Wr_animal;
    delete Wr_cat;
    }
    return 0;
}