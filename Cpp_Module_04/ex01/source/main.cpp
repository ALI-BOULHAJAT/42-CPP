/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <aboulhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:23:17 by aboulhaj          #+#    #+#             */
/*   Updated: 2022/11/07 00:31:56 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

#define N 2

int main()
{
	{
	const Animal **array = NULL;
	int i = 0;

	array = new (std::nothrow) Animal const*[N];
	if(!array)
		return (1);	
	while (i < N)
	{
		while (i < (N / 2))
		{
			array[i] = new Dog();
			i++;
		}
		array[i] = new Cat();
		i++;
	}
	i = 0;
	while (i < N)
	{
			array[i]->makeSound();
			i++;
	}
	i = 0;
	while (i < N)
	{
		delete array[i];
		i++;
	}
	delete[] array;
	}

	std::cout << "\n*** -> second test for deep copy of two objects cat <- ***\n" << std::endl;

	{
	Cat basic;
	{
		Cat tmp;
		basic = tmp;
		std::cout << BLUE << "inside small scope" << std::endl;
		tmp.makeSound();
		basic.makeSound();
		std::cout << END_CLR;
	}
	std::cout << RED << "outside small scope" << std::endl;
	basic.makeSound();
	std::cout << END_CLR;
	return (0);
	}
}
