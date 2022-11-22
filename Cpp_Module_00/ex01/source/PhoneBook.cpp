/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:00:13 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/09/21 09:56:54 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include "../include/Contacts.hpp"

void	PhoneBook::add_data()
{
	int			index;
	Contacts	Contact;

	index = this->number_of_contact % 8;
	Contact.add_contact(&(this->contacts[index]));
	this->number_of_contact++;
}

void	PhoneBook::PrintAllData()
{
	int			search_index;
	std::string	line;
	int			index;
	Contacts	Contact;

	index = 0;
	if (this->number_of_contact > 0)
	{
		std::cout << INDEX_TABLE;
		while(index < this->number_of_contact && index < 8)
		{
			Contact.printContacts(this->contacts[index], index);
			index++;
		}
		while (1)
		{
			std::cout << INDEX_TO_DISPLAY;
			std::getline(std::cin, line);
			search_index = atoi(line.c_str());
			search_index -= 1;
			if (line[0] == '\0')
			{
				std::cout << CNTR_D;
				exit(1);
			}
			else if (search_index >= 0 && search_index < this->number_of_contact && search_index < 8)
			{
				Contact.printContact(this->contacts[search_index]);
				break ;
			}
			else
				std::cout << NO_INDEX;
		}

	}
	else
		std::cout << PHONEBOOK_EMPTY;
}