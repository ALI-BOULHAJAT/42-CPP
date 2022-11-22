/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:57:45 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/16 04:56:25 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Replace.hpp"

Replace::Replace(std::string file_name)
{
	std::string out;
	this->_in_file.open(file_name);
	if (!(this->_in_file.is_open()))
	{
		std::cout << "error : can't opening " << file_name << std::endl;
		exit(1);
	}
	this->_out_file.open(file_name + ".replace");
	if (!(this->_out_file.is_open()))
	{
		std::cout << "error : can't opening " << file_name << ".replace" << std::endl;
		exit(1);
	}
}

Replace::~Replace(void)
{
	this->_in_file.close();
	this->_out_file.close();
}

void	Replace::replacing(std::string str1, std::string str2)
{
	std::string	line;
	std::string	n_line;
	size_t		index;

	while(std::getline(this->_in_file, line))
	{
		while(1)
		{
			index = line.find(str1);
			if (str1 == "" || index == std::string::npos)
				break;
			else
			{
				line.erase(index, str1.length());
				line.insert(index, str2);
			}
		}
		this->_out_file << line << std::endl;
	}
	
}