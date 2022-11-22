/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:56:40 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/06 23:06:06 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    private:
        Brain *_brain;
    public:
        Dog(void);
        Dog(Dog const &dog);
        Dog &operator=(Dog const &dog);
        ~Dog(void);

        virtual void makeSound(void) const;
};

#endif