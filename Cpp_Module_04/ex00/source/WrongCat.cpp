/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:23:10 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/19 09:02:03 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->_wrong_type = "WrongCat";
    std::cout << "WrongCat : Default constractor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &Wrongcat)
{
    this->_wrong_type = Wrongcat._wrong_type;
    std::cout << "WrongCat : copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &Wrongcat)
{
    this->_wrong_type = Wrongcat._wrong_type;
    return (*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat : Destructor called" << std::endl;
}

void WrongCat::makeWrSound(void)
{
    std::cout << "WrongCat : MEAOOO !!" << std::endl;
}
