/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 04:38:28 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/09 07:15:37 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#define BLUE "\x1b[36m"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define MAUVE "\x1b[33m"
#define END_CLR "\033[0m"

class Form ;

class Bureaucrat
{
    private:
        std::string const   _name;
        unsigned int        _grade;
    public:
        Bureaucrat(void);
        Bureaucrat(Bureaucrat const &bureaucrat);
        Bureaucrat &operator=(Bureaucrat const &bureaucrat);
        ~Bureaucrat(void);

        Bureaucrat(unsigned int grade, std::string const name);
        std::string const get_name(void) const;
        unsigned int get_grade(void) const;

        class GradeTooHighException: public std::runtime_error  //nested class
        {
            public:
                GradeTooHighException(void);
        };
        
        class GradeTooLowException: public std::runtime_error
        {
            public:
                GradeTooLowException(void);
        };
        void increment_grade(void);
        void decrement_grade(void);
        void signForm(Form &form);
        void executeForm(Form const &form);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif
