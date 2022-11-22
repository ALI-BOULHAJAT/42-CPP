/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:19:37 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/07 00:10:45 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# define BLUE "\x1b[36m"
#define RED "\x1b[31m"
# define END_CLR "\033[0m"

#include <iostream>
#include "Brain.hpp"

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
        virtual void makeSound(void) const;
        std::string getType() const;
};

#endif