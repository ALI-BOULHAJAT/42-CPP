/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 09:54:15 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/09 07:17:00 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

int     main(void)
{
        std::cout << BLUE << "\n*** -> output test for the sherubbery <- ***\n" << std::endl;
        {
        try
        {
                Bureaucrat      me(44, "first bureaucrat");
                SherubberyCreationForm  the_sherub("the_shrub");
                the_sherub.beSigned(me);
                me.signForm(the_sherub);
                me.executeForm(the_sherub);
        }
        catch (std::runtime_error const &error)
        {
                std::cout << "Error: " << error.what() << std::endl;
                return (1);
        }
        }
        std::cout << MAUVE << "\n*** -> output test for the Roboto <- ***\n" << std::endl;
        {
        try
        {
                Bureaucrat      me(35, "second bureaucrat");
                RobotomyRequestForm     the_roboto("the_robot");
                the_roboto.beSigned(me);
                me.signForm(the_roboto);
                me.executeForm(the_roboto);
        }
        catch (std::runtime_error const &error)
        {
                std::cout << "Error: " << error.what() << std::endl;
                return (1);
        }
        }
        std::cout << GREEN << "\n*** -> output test for the President <- ***\n" << std::endl;
        {
        try
        {
                Bureaucrat      me(4, "third bureaucrat");
                PresidentialPardonForm the_president("the_president");
                the_president.beSigned(me);
                me.signForm(the_president);
                me.executeForm(the_president);
        }
        catch (std::runtime_error const &error)
        {
                std::cout << "Error: " << error.what() << std::endl;
                return (1);
        }
        }
        return (0);
}
