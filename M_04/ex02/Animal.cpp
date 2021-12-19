/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:49:37 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/19 16:42:15 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal( void ): type("Animal")
{
	std::cout << "[Animal] Default constructor has been called" << std::endl;
}

AAnimal::AAnimal( const AAnimal& src): type("Animal")
{
	std::cout << "[Animal] Copy constructor has been called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal( void )
{
	std::cout << "[Animal] Deconstructor has been called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& rhs)
{
	if (this != &rhs)
		type = rhs.type;
	return *this;
}

std::string AAnimal::getType( void ) const
{
	return (type);
}
