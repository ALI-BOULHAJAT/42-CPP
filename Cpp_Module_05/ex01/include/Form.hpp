/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:25:27 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/09 07:01:06 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class Bureaucrat;
#include "Bureaucrat.hpp"

class Form
{
    private:
        std::string const _name;
        bool                _is_signed;
        unsigned int const  _sign_grade;
        unsigned int const _excute_grade;
        
    
    public:
        Form(void);
        Form(Form const &form);
        Form &operator=(Form const &form);
        ~Form(void);

        Form(std::string name, unsigned int const sign_grade, unsigned int const excute_grade);
        std::string const get_name(void);
        unsigned int get_sign_grade(void) const;
        unsigned int get_excute_grade(void) const;
        void beSigned(Bureaucrat const &bureaucrat);
        bool get_signed(void);
        
        class GradeTooHighException: public std::runtime_error
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
        
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif