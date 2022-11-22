/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:04:21 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/09/24 12:26:13 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contacts.hpp"
#include "../include/PhoneBook.hpp"

void	Contacts::printContacts(Contacts contact, int index)
{
	LOG_TRUNC(std::to_string(index + 1));
	std::cout << PIPE;
	LOG_TRUNC(contact.first_name);
	std::cout << PIPE;
	LOG_TRUNC(contact.last_name);
	std::cout << PIPE;
	LOG_TRUNC(contact.nickname);
	std::cout << std::endl;
}

void	Contacts::printContact(Contacts contact)
{
	std::cout << "First name: " << contact.first_name << std::endl;
	std::cout << "Last name: " << contact.last_name << std::endl;
	std::cout << "Nickname: " << contact.nickname << std::endl;
	std::cout << "Phone number: " << contact.phone_number << std::endl;
	std::cout << "Darkest secret: " << contact.darkest_secret << std::endl;
}

std::string	data_no_null(const char *prompt)
{
	std::string	line;
	while(1)
	{
		std::cout << ADD_PROCCES << prompt;
		std::getline (std::cin,line);
		if (line.length())
			return (line);
		if(line[0] == '\0')
		{
			std::cout << CNTR_D;
			exit(1);
		}
		std::cout << EMPTY_FIELD;
	}
}

void	Contacts::add_contact(Contacts *contact)
{
	std::string	input;
	PhoneBook	Phone;

	(*contact).first_name = data_no_null("   [First name]   > ");
	(*contact).last_name = data_no_null("    [Last name]   > ");
	(*contact).nickname = data_no_null("    [Nickname]    > ");
	(*contact).phone_number = data_no_null("  [Phone number]  > ");
	(*contact).darkest_secret = data_no_null(" [Darkest secret] > ");
}