/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:35:04 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/04 14:20:15 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << BAD_ARG;
		return (1);
	}
	Harl	my_harl;

	my_harl.complain(av[1]);
	return (0);
}