/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 08:33:28 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/07 09:25:20 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

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