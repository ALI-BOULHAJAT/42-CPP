/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:21:00 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/09 05:14:37 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

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






















/*

int     main(void)
{
        Bureaucrat                              me("Me", 145);
        ShrubberyCreationForm   shrub("Shrub");

        try
        {
                shrub.beSigned(me);
                me.signForm(shrub);
                me.executeForm(shrub);
        }
        catch (std::exception const &exception)
        {
                std::cerr << "Error: " << exception.what() << std::endl;
                return (1);
        }
        std::cout << "Success!" << std::endl;
        return (0);
}

// * RobotomyRequestForm Test
// int  main(void)
// {
//      Bureaucrat                      me("me", 72);
//      RobotomyRequestForm     robotomyRequestForm("robotomy");

//      try
//      {
//              robotomyRequestForm.beSigned(me);
//              me.signForm(robotomyRequestForm);
//              me.executeForm(robotomyRequestForm);
//      }
//      catch(std::exception const &exception)
//      {
//              std::cerr << "Error: " << exception.what() << std::endl;
//              return (1);
//      }
//      std::cout << "Success!" << std::endl;
//      return (0);
// }

// * PresidentialPardonForm Test
// int  main(void)
// {
//      Bureaucrat                              me("me", 25);
//      PresidentialPardonForm  form("presidential_pardon_target");

//      try
//      {
//              form.beSigned(me);
//              me.signForm(form);
//              me.executeForm(form);
//      }
//      catch(std::exception const &exception)
//      {
//              std::cerr << "Error: " << exception.what() << std::endl;
//              return (1);
//      }
//      return (0);
// }
➜  ~ 

*/