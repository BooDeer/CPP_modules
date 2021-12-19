/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:12:20 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/19 15:37:43 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{

	{
		/* ======== Array of animals ======== */
		AAnimal *animals[2];
		animals[0] = new Dog();
		animals[1] = new Cat();
		
		animals[0]->makeSound();
		animals[1]->makeSound();
		
		for (int i = 0; i < 2; i++)
			delete animals[i];
			// brain 1
	}
	std::cout << std::endl << std::endl;
	Dog doggo;
	{
		/* ======== Deep copy  ======== */
		Dog GuineaPig = doggo;
		
	}
	
	return (0);
}