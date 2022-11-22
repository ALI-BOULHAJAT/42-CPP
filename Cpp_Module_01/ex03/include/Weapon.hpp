/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:45:00 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/09/27 17:37:47 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>

class	Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(std::string type);
		const	std::string &getType(void);
		void	setType(std::string type);
};
#endif