/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:04:24 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/09/21 10:59:30 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contacts.hpp"
#include "../include/PhoneBook.hpp"

int main()
{
	std::string	command;
	PhoneBook	Phone;
	Contacts	Contact;
	std::string test;

	std::cout << INIT_PROMPT;
	while(1)
	{
		std::cout << PROMPT;
		std::getline (std::cin,command);
		if (command[0] == '\0')
		{
			std::cout << CNTR_D;
			exit(1);
		}
		else if (command == "ADD")
			Phone.add_data();
		else if (command == "SEARCH")
			Phone.PrintAllData();
		else if (command == "EXIT")
		{
			std::cout << DONE;
			break;
		}
		else
			std::cout << ERR_CMD;
	}
	return 0;
}