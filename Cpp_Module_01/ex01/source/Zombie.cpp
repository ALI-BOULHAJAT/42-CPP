/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 09:44:33 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/04 14:00:47 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " was destroyed" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}