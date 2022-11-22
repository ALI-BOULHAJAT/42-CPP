/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 06:15:35 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/07 10:33:25 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class SherubberyCreationForm: public Form
{
    private:
        std::string _target;
    public:
        SherubberyCreationForm(void);
        SherubberyCreationForm(SherubberyCreationForm const &src);
        SherubberyCreationForm &operator=(SherubberyCreationForm const &src);
        ~SherubberyCreationForm(void);

        SherubberyCreationForm(std::string target);
        void    execute(Bureaucrat const &excutor)const;
};

#endif




/*
std::cout << "* DRILLING NOISES *" << std::endl;
srand(time(NULL));
robotomySuccess = static_cast<bool>(rand() % 2);
if (robotomySuccess == true)
{
        std::cout << "Robotomy " << "\033[1;32m" << "success" << "\033[0m";
        std::cout << std::endl;
}
else
{
        std::cout << "Robotomy " << "\033[1;31m" << "failed" << "\033[0m";
        std::cout << std::endl;
}
return ;
*/