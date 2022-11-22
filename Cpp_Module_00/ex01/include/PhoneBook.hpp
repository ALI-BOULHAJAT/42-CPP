#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contacts.hpp"
# include <stdlib.h>
# include <string>



class PhoneBook
{
	public:
		PhoneBook()
		{
			number_of_contact = 0;
		}
		void	add_data();
		bool	SearchContact();
		void	PrintAllData();

	private:
		Contacts	contacts[8];
		int			number_of_contact;
};

#endif