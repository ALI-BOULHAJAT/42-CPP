/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:56:22 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/09/28 11:41:59 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	zombie = Zombie(name);
	zombie.announce();
}