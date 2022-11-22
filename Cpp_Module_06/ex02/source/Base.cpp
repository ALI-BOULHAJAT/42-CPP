/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 03:10:59 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/14 05:32:59 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"

Base::~Base(void)
{
    //
}

Base *generate(void)
{
	srand(time(NULL));
	int check = rand() % 3;
	switch (check)
	{
	case 0:
		return (new A());
	case 1:
		return (new B());
	case 2:
		return (new C());
	default:
		return (NULL);
	}        
        
}

void     identify(Base *p)
{
    A       *ptr_a;
    B       *ptr_b;
    C       *ptr_c;

    ptr_a = dynamic_cast<A *>(p);
    if (ptr_a != NULL)
    {
            std::cout << "the actual type of the object using pointer is A" << std::endl;
    }
    ptr_b = dynamic_cast<B *>(p);
    if (ptr_b != NULL)
    {
            std::cout << "the actual type of the object using pointer is B" << std::endl;
    }
    ptr_c = dynamic_cast<C *>(p);
    if (ptr_c != NULL)
    {
            std::cout << "the actual type of the object using pointer is C" << std::endl;
    }
}

void identify(Base &p)
{
	try
	{
		A &ref_a = dynamic_cast<A &>(p);
		(void)ref_a;
	}
	catch(const std::bad_cast &error)
	{
		try
		{
			B &ref_b = dynamic_cast<B &>(p);
			(void)ref_b;
		}
		catch(const std::bad_cast &error)
		{
			try
			{
				C &ref_c = dynamic_cast<C &>(p);
				(void)ref_c;
			}
			catch(const std::bad_cast &error)
			{
				std::cout << "None" << std::endl;
			}
			std::cout << "the actual type of the object using reference is C" << std::endl;
			return;
		}
		std::cout << "the actual type of the object using reference is B" << std::endl;
		return;
	}
	std::cout << "the actual type of the object using reference is A" << std::endl;
	return ;
	
}
