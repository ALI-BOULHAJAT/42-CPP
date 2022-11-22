/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 08:33:28 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/09 05:14:54 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"


class RobotomyRequestForm: public Form
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(RobotomyRequestForm const &src);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &src);
        ~RobotomyRequestForm(void);

        RobotomyRequestForm(std::string target);
        void    execute(Bureaucrat const &excutor) const;
};

#endif