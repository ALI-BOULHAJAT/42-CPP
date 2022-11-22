/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:51:41 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/09/27 17:36:59 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;
	
	public:
		HumanA(std::string name, Weapon &Weapon);
		void	attack(void);
};

#endif