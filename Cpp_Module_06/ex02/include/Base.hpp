/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 03:00:27 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/14 04:45:27 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
    public:
        virtual ~Base(void);
};

class A: public Base
{
    //
};

class B: public Base
{
    //
};

class C: public Base
{
    //
};

Base *generate(void);
void identify(Base* p);
void identify(Base &p);


#endif