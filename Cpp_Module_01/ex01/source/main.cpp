/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:10:51 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/05 13:13:46 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

# define N 5 

int	main()
{
	Zombie	*list_zombie;

	list_zombie = zombieHorde(N, "stiv");
	if (!list_zombie)
		return (1);
	for(int i = 0; i < N; ++i)
		list_zombie[i].announce();
	delete [] list_zombie;
	return (0);
}