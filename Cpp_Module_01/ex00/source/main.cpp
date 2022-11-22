/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:55:33 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/05 13:08:03 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main()
{
	Zombie	*ptr_zombie;

	ptr_zombie = new Zombie("foo");
	if (!ptr_zombie)
		return (1);
	ptr_zombie->announce();
	delete ptr_zombie;
	randomChump("stiv");
	return (0);
}