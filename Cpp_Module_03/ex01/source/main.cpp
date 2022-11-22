/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:23:57 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/12 04:34:09 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int     main(void)
{
    ClapTrap                     stive("stive");
    ScavTrap                     amanda("amanda");

    stive.setDamage(2);
    stive.attack(amanda.get_name());
    amanda.takeDamage(60);
    amanda.beRepaired(100);
    amanda.attack(stive.get_name());
    stive.takeDamage(15);
    amanda.guardGate();
    stive.get_status();
    amanda.get_status();
    return (0);
}