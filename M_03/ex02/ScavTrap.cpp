/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:46:21 by boodeer           #+#    #+#             */
/*   Updated: 2021/12/11 13:49:18 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( void )
{
	std::cout << "[ScavTrap] Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[ScavTrap] constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_AttackDamage = 20;
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

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
{
	std::cout << "[ScavTrap] assignment operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_AttackDamage = rhs._AttackDamage;
	}
	return *this;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "The ScavTrap: " << _name << " entered the Gate keeper mode!!" << std::endl;
}

void	ScavTrap::attack( std::string name )
{
	std::cout << "ScavTrap " << _name << " attack " << name << " causing " << _AttackDamage << " points of damage!" << std::endl;
}