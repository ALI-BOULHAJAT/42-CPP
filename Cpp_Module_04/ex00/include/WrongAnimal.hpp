/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:55:49 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/06 22:58:12 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>


class WrongAnimal
{
    protected:
        std::string _wrong_type;
    public:
        WrongAnimal(void);
        WrongAnimal(WrongAnimal const &type);
        WrongAnimal &operator=(WrongAnimal const &WrongAnimal);
        virtual ~WrongAnimal(void);

        void makeWrSound(void);
        std::string getType() const;
};

#endif