/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:12:20 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/19 11:39:09 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{
	const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete i;
	delete	j;
	delete meta;
	return (0);
}