/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 09:44:38 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/22 04:57:42 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie  *ptr_zombie;

	ptr_zombie = new (std::nothrow) Zombie[N];
	if (!ptr_zombie)
		return (NULL);
	for (int i = 0; i < N; ++i)
		ptr_zombie[i].set_name(name);
	return (ptr_zombie);
}