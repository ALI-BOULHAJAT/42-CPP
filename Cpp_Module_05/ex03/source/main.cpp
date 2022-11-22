/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 09:54:15 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/10 06:20:31 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Intern.hpp"

int main ()
{
    Intern someRandomIntern;
    Form* rrf;
    
    std::cout << BLUE << "\n*** -> output test for the sherubbery <- ***\n" << std::endl;
        {
        try
        {
                Bureaucrat      me(1, "second bureaucrat");
                rrf = someRandomIntern.makeForm("shrubbery creation", "the_shrubbery");
                rrf->beSigned(me);
                me.signForm(*rrf);
                me.executeForm(*rrf);
        }
        catch (std::runtime_error const &error)
        {
                std::cout << "Error: " << error.what() << std::endl;
        }
        }
        std::cout << MAUVE << "\n*** -> output test for the Roboto <- ***\n" << std::endl;
        {
        try
        {
                Bureaucrat      me(0, "second bureaucrat");
                rrf = someRandomIntern.makeForm("robotomy request", "the_robotomy");
                rrf->beSigned(me);
                me.signForm(*rrf);
                me.executeForm(*rrf);
        }
        catch (std::runtime_error const &error)
        {
                std::cout << "Error: " << error.what() << std::endl;
        }
        }
        std::cout << GREEN << "\n*** -> output test for the President <- ***\n" << std::endl;
        {
        try
        {
                Bureaucrat      me(4, "third bureaucrat");
                rrf = someRandomIntern.makeForm("presidenial pardon", "the_president");
                rrf->beSigned(me);
                me.signForm(*rrf);
                me.executeForm(*rrf);
        }
        catch (std::runtime_error const &error)
        {
                std::cout << RED << "Error: " << error.what() << END_CLR << std::endl;
        }
        system("leaks Bureaucrat");
        }
    return (0);
}
