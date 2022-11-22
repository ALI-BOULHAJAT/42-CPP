/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:23:57 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/11 10:18:37 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int     main(void)
{
    ClapTrap                     stive("stive");
    ScavTrap                     amanda("amanda");
    FragTrap                     aliana("aliana");

    stive.setDamage(2);
    stive.attack(amanda.get_name());
    amanda.takeDamage(60);
    amanda.beRepaired(100);
    amanda.attack(stive.get_name());
    stive.takeDamage(15);
    amanda.takeDamage(2);
    amanda.guardGate();
    aliana.highFivesGuys();
    stive.get_status();
    amanda.get_status();
    return (0);
}