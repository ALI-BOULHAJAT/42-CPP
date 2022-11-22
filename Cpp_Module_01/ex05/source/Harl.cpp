/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:50:57 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/05 13:29:42 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

void	Harl::debug(void)
{
	std::cout << DEBUG << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}

void	Harl::error(void)
{
	std::cout << ERROR << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::info(void)
{
	std::cout << INFO "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << WARNING << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*func)(void);
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index;

	for (index = 0; index < 4; index++)
		{
			if (level == str[index])
				break;
		}
	switch (index)
	{
		case 0:
			func = &Harl::debug;
			break ;
		case 1:
			func = &Harl::info;
			break ;
		case 2:
			func = &Harl::warning;
			break ;
		case 3:
			func = &Harl::error;
			break ;
		default:
			std::cout << ERR_CMD << level << END_ERR;
			func = NULL;  
	}
	if (func)
		(this->*func)();
}