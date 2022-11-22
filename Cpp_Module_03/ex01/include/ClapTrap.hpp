/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:45:44 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/11 02:27:18 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <iomanip>

# define LOG_TRUNC(str) (str.length() > 6 ? std::cout << str.substr(0, 5) << "." : std::cout << std::setw(6) << str)
# define GREEN "\x1b[32m"
# define BLUE "\x1b[36m"
#define RED "\x1b[31m"
# define END_CLR "\033[0m"

class ClapTrap
{
    protected:
        std::string _name;
        int         _health;
        int         _energy;
        int         _damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap &operator=(ClapTrap const &claptrap);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void setDamage(unsigned int damage);
        void beRepaired(unsigned int amount);
        void get_status();
        std::string get_name();
        int         get_damage();
};

#endif