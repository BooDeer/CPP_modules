/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 09:41:14 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/19 15:34:53 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "[Brain] Default constructor has been called" << std::endl;
	for(int i = 0; i < 100; i++)
		ideas[i] = "Shower thought";
}

Brain::~Brain( void )
{
	std::cout << "[Brain] Deconstructor has been called" << std::endl;
}

Brain::Brain( const Brain& src )
{
	std::cout << "[Brain] Copy constructor has been called" << std::endl;

	for(int i = 0; i < 100; i++)
		ideas[i] = std::string(src.ideas[i]);
}

Brain& Brain::operator=( const Brain& rhs )
{
	std::cout << "[Brain] Assignement operator has been called" << std::endl;
	
	if (this != &rhs)
		for(int i = 0; i < 100; i++)
			ideas[i] = rhs.ideas[i];
	return *this;
}
