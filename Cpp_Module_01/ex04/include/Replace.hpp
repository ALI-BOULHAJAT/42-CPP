/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:43:07 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/09/28 11:39:57 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

class Replace
{
	private:
		std::ifstream	_in_file;
		std::ofstream	_out_file;
	
	public:
		Replace(std::string file_name);
		~Replace(void);
		void replacing(std::string str1, std::string str2);
};

#endif