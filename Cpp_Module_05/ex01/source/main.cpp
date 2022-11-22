/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 09:54:15 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/09 07:09:27 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int     main(void)
{

        try
        {
                Bureaucrat      me(37, "the_bureaucrat");
                Form            myForm("the_form", 37, 42);
                myForm.beSigned(me);
                me.signForm(myForm);
        }
        catch (std::runtime_error const &error)
        {
                std::cout << RED << "Error: " << error.what() << END_CLR << std::endl;
        }
        return (0);
}
