/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 01:54:18 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/09 06:24:54 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

Intern::FormNoExist::FormNoExist(void): std::runtime_error("the form name doesn’t exist") {}

Intern::Intern(void) {}

Intern::Intern(Intern const &intern)
{
    (void)intern;
    return ;
}

Intern &Intern::operator=(Intern const &intern)
{
    (void)intern;
    return (*this);
}

Intern::~Intern(void) {}

Form *Intern::makeForm(std::string form_name, std::string form_target)
{
    std::string name_list[3] = {"shrubbery creation", "robotomy request", "presidenial pardon"};
    int i;
    
    for (i = 0; i < 3; i++)
    {
        if (name_list[i] == form_name)
            break;
    }
    switch (i)
    {
        case 0:
            return (new SherubberyCreationForm(form_target));
        case 1:
            return(new RobotomyRequestForm(form_target));
        case 2:
            return (new PresidentialPardonForm(form_target));
        default:
            throw FormNoExist();
    }
    
}