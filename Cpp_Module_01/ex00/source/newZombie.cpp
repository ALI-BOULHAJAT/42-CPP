/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:52:06 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/05 13:09:16 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*ptr;

	try
	{
		ptr = new Zombie(name);
	}
	catch (std::bad_alloc)
	{
		return (NULL);
	}
	return (ptr);
}