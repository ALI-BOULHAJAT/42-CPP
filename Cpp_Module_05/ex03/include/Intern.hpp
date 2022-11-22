/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:53:33 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/09 06:21:54 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "../include/Form.hpp"

class Intern
{
    public:
        Intern(void);
        Intern(Intern const &intern);
        Intern &operator=(Intern const &intern);
        ~Intern(void);

        class FormNoExist: public std::runtime_error
        {
            public:
                FormNoExist(void);
        };

        Form *makeForm(std::string form_name, std::string form_target);
};

#endif
