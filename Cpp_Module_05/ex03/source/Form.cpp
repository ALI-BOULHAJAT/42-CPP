/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:49:28 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/09 06:23:56 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"


Form::GradeTooHighException::GradeTooHighException(void): std::runtime_error("Grade too high") {}

Form::GradeTooLowException::GradeTooLowException(void): std::runtime_error("Grade too low") {}

Form::FormNoSigned::FormNoSigned(void): std::runtime_error("Form can't Signed") {}

Form::Form(void): _name("default form"), _is_signed(0), _sign_grade(150), _excute_grade(150) {}

Form::Form(Form const &form): _name(form._name), _is_signed(form._is_signed), _sign_grade(form._sign_grade), _excute_grade(form._excute_grade) {}

Form::Form(std::string name, unsigned int const sign_grade, unsigned int const excute_grade): _name(name), _sign_grade(sign_grade), _excute_grade(excute_grade)
{
    this->_is_signed = false;
    if (sign_grade < 1 || excute_grade < 1)
        throw Form::GradeTooLowException();
    else if (sign_grade > 150 || excute_grade > 150)
        throw Form::GradeTooHighException();
}

Form::~Form(void) {}

unsigned int Form::get_sign_grade(void) const
{
    return (this->_sign_grade);
}

unsigned int Form::get_excute_grade(void) const
{
    return (this->_excute_grade);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
    if (bureaucrat.get_grade() <= this->_sign_grade)
        this->_is_signed = true;
    else
        throw GradeTooLowException();
}

bool Form::get_signed(void)
{
    return (this->_is_signed);
}

std::string const Form::get_name(void) const
{
    return (this->_name);
}

void Form::check_form_signed(Bureaucrat const &bureaucrat) const
{
    if (!(this->_is_signed))
        throw FormNoSigned();
    else if (this->_excute_grade < bureaucrat.get_grade())
        throw FormNoSigned();
}
