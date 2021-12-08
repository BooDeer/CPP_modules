/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boodeer <boodeer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:46:21 by boodeer           #+#    #+#             */
/*   Updated: 2021/12/02 22:04:39 by boodeer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( void )
{
	std::cout << "[ScavTrap] Default constractor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
	std::cout << "[ScavTrap] Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "[ScavTrap] Destructor called" << std::endl;
}