/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:19:37 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/07 00:40:29 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_HPP
#define A_ANIMAL_HPP

# define BLUE "\x1b[36m"
#define RED "\x1b[31m"
# define END_CLR "\033[0m"

#include <iostream>
#include "Brain.hpp"

class A_Animal
{
    protected:
        std::string _type;
    public:
        A_Animal(void);
        A_Animal(A_Animal const &animal);
        A_Animal &operator=(A_Animal const &animal);
        virtual ~A_Animal(void);

        A_Animal(std::string const &type);
        virtual void makeSound(void) const = 0;
        std::string getType() const;
};

#endif