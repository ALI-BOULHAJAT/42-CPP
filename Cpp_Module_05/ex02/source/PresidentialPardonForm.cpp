/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:25:41 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/09 05:59:01 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("PresidentialPardonForm", 25, 5), _target("Presidential target") {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): Form(src), _target(src._target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
    if (this != &src)
        this->_target = src._target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), _target(target) {}

void PresidentialPardonForm::execute(Bureaucrat const &excutor) const
{
    this->check_form_signed(excutor);
    std::cout << excutor.get_name() << " has been pardoned by Zaphod Beeblebrox\n";
}