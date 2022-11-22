/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:18:07 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/07 00:30:33 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "A_Animal.hpp"

class Cat: public A_Animal
{
    private:
        Brain *_brain;
    public:
        Cat(void);
        Cat(Cat const &cat);
        Cat &operator=(Cat const &cat);
        ~Cat(void);

        virtual void makeSound(void) const;
};

#endif