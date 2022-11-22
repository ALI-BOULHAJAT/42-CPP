/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:43:58 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/09/28 11:39:35 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Replace.hpp"
#include <fstream>
#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "error : bad arguments";
		return(1);
	}
	Replace	my_sed(av[1]);

	my_sed.replacing(av[2], av[3]);
	return (0);
}
