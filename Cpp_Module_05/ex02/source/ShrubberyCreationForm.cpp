/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 06:24:56 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/07 08:43:14 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"
#include <fstream>

SherubberyCreationForm::SherubberyCreationForm(void): Form("SherubberyCreationForm", 145, 137), _target("sherubbery target") {}

SherubberyCreationForm::SherubberyCreationForm(SherubberyCreationForm const &src): Form(src), _target(src._target) {}

SherubberyCreationForm &SherubberyCreationForm::operator=(SherubberyCreationForm const &src)
{
    if (this != &src)
        this->_target = src._target;
    return (*this);
}

SherubberyCreationForm::~SherubberyCreationForm(void) {}

SherubberyCreationForm::SherubberyCreationForm(std::string target): Form("SherubberyCreationForm", 145, 137), _target(target) {}

void SherubberyCreationForm::execute(Bureaucrat const &excutor) const
{
    std::ofstream file;
    this->check_form_signed(excutor);
    file.open(this->_target + "_shrubbery");
    if (file.is_open())
    {
        file << "                   ___" << std::endl;
        file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
        file << "             ,-'          __,,-- " << std::endl;
        file << "           ,'    __,--\"\"\"\"dF      )" << std::endl;
        file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
        file << "        ,'       _Hb ___dF\"-._,-'" << std::endl;
        file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
        file << "     (     ,-'                  `." << std::endl;
        file << "      `._,'     _   _             ;" << std::endl;
        file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
        file << "       \\    ,'\"Hb.-'HH`-.dHF\"" << std::endl;
        file << "        `--'   \"Hb  HH  dF\"" << std::endl;
        file << "                \"Hb HH dF" << std::endl;
        file << "                 \"HbHHdF" << std::endl;
        file << "                  |HHHF" << std::endl;
        file << "                  |HHH|" << std::endl;
        file << "                  |HHH|" << std::endl;
        file << "                  |HHH|" << std::endl;
        file << "                  |HHH|" << std::endl;
        file << "                  dHHHb" << std::endl;
        file << "                .dFd|bHb.               o" << std::endl;
        file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
        file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
        file << "##########################################" << std::endl;
    }
    else
    {
        std::cerr << "error : can't open " << this->_target << "_shrubbery file" << std::endl;
        return ;
    }
}

