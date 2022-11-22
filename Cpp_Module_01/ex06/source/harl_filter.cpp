/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl_filter.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:50:57 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/04 14:19:56 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

void	Harl::debug(void)
{
	std::cout << DEBUG << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << ERROR << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::info(void)
{
	std::cout << INFO "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << WARNING << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*func)(void);

	int index;
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (index = 0; index < 4; index++)
	{
		if (level == str[index])
			break;
	}
	switch (index)
	{
		case 0:
			func = &Harl::debug;
			(this->*func)();
		case 1:
			func = &Harl::info;
			(this->*func)();
		case 2:
			func = &Harl::warning;
			(this->*func)();
		case 3:
			func = &Harl::error;
			(this->*func)();
			break;
		default:
			std::cout << ERR_CMD << level << END_ERR;   
	}
}