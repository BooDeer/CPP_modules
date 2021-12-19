/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:49:46 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/19 15:34:32 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "[Dog] Default constructor has been called" << std::endl;
	this->type = "Dog";
	brains = new Brain();
}

Dog::Dog( const Dog& src)
{
	std::cout << "[Dog] Copy constructor has been called" << std::endl;
	delete brains;

	brains = new Brain(*src.brains);
}

Dog::~Dog( void )
{
	std::cout << "[Dog] Deconstructor has been called" << std::endl;
	delete brains;
}

Dog& Dog::operator=(const Dog& rhs)
{
	if (this != &rhs)
		type = rhs.type;
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << "woof woof *barks* makima" << std::endl;
}