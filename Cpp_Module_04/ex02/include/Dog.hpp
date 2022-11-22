/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:56:40 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/07 00:31:13 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "A_Animal.hpp"

class Dog: public A_Animal
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