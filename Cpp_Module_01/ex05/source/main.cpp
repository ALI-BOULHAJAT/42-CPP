/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:35:04 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/04 14:14:32 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int	main()
{
	Harl my_harl;

	my_harl.complain("DEBUG");
	my_harl.complain("INFO");
	my_harl.complain("DEB");
	my_harl.complain("WARNING");
	my_harl.complain("ERROR");
	return (0);
}