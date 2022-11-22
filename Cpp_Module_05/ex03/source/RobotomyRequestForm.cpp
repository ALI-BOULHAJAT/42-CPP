/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:13:29 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/08 00:08:38 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45), _target("Roboto target") {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): Form(src), _target(src._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
    if (this != &src)
        this->_target = src._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45), _target(target) {}

void RobotomyRequestForm::execute(Bureaucrat const &excutor) const
{
    this->check_form_signed(excutor);
    std::cout << "-> Some Drilling Noises <-" << std::endl;
    if (rand() % 2)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->_target << " has been failed to robotomizing" << std::endl;
}