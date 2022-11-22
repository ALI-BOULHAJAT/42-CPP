/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 07:06:59 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/06 23:41:35 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal(void);
        Animal(Animal const &animal);
        Animal &operator=(Animal const &animal);
        virtual ~Animal(void);

        Animal(std::string const &type);
        virtual void makeSound(void);
        std::string getType() const;
};

#endif