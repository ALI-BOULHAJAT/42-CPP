/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 04:35:16 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/07 01:16:35 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter ;

class AMateria
{
    private:
        std::string _type;
    public:
        AMateria(void);
        AMateria(AMateria const &amateria);
        AMateria &operator=(AMateria const &amateria);
        virtual ~AMateria(void);
        
        AMateria(std::string type);
        std::string const   &get_type(void);
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
};

#endif