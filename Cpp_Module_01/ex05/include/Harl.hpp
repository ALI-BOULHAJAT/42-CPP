/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:29:18 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/10/04 08:02:10 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

# include <iostream>

#define ERROR "\x1b[31m[ERROR]:\033[0m\n"
#define DEBUG "\x1b[32m[DEBUG]:\033[0m\n"
#define WARNING "\x1b[33m[WARNING]:\033[0m\n"
#define INFO "\x1b[34m[INFO]:\033[0m\n"
#define ERR_CMD "\x1b[31mError level not found -> ["
#define END_ERR "]\033[0m\n"
class Harl
{
	private:
		void	debug( void);
		void	info( void);
		void	warning( void);
		void	error( void);
	
	public:
		void	complain( std::string level );
};

#endif