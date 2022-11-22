/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:21:00 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/07 09:33:47 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(PresidentialPardonForm const &src);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &src);
        ~PresidentialPardonForm(void);

        PresidentialPardonForm(std::string target);
        void execute(Bureaucrat const &excutor) const;
};

#endif