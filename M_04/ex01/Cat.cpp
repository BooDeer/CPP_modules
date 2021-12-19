/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:49:53 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/19 15:34:45 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "[Cat] Default constructor has been called" << std::endl;
	type = "Cat";
	brains = new Brain();
}

Cat::Cat( const Cat& src)
{
	std::cout << "[Cat] Copy constructor has been called" << std::endl;
	delete brains;

	brains = new Brain(*src.brains);
}

Cat::~Cat( void )
{
	std::cout << "[Cat] Deconstructor has been called" << std::endl;
	delete brains;
}

Cat& Cat::operator=(const Cat& rhs)
{
	if (this != &rhs)
		type = rhs.type;
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Nyaa~" << std::endl;
}