/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 06:13:00 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/09 06:43:58 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException(void): std::runtime_error("Grade too high") {}

Bureaucrat::GradeTooLowException::GradeTooLowException(void): std::runtime_error("Grade too low") {}

Bureaucrat::Bureaucrat(void):_name("default bureaucrat"), _grade(150) {}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat): _name(bureaucrat._name), _grade(bureaucrat._grade)
{
    if (bureaucrat._grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (bureaucrat._grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bureaucrat)
{
    if (this != &bureaucrat)
    {
        this->_grade = bureaucrat._grade;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(unsigned int grade, std::string const name): _name(name), _grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::string const Bureaucrat::get_name(void) const
{
    return (this->_name);
}

unsigned int Bureaucrat::get_grade(void) const
{
    return (this->_grade);
}

void Bureaucrat::increment_grade(void)
{
    if (this->_grade > 1)
        this->_grade -= 1;
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrement_grade(void)
{
    if (this->_grade < 150)
        this->_grade += 1;
    else
        throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
    out << bureaucrat.get_name() << ", bureaucrat grade " << bureaucrat.get_grade();
    return (out);
}

void Bureaucrat::signForm(Form &form)
{
    if (form.get_signed() == true)
    {
        std::cout << this->_name << " signed " << form.get_name();
        std::cout << std::endl;
        return ;
    }
    else
    {
        std::cout << this->_name << " couldn't sign " << form.get_name() << " because his grade is too low.\n";
        return ;
    }
}

void Bureaucrat::executeForm(Form const &form)
{
    form.execute(*this);
    std::cout << this->_name << " executed " << form.get_name() << std::endl;
    return ;
}