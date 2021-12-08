/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boodeer <boodeer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:30:44 by boodeer           #+#    #+#             */
/*   Updated: 2021/12/02 22:04:12 by boodeer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Constructors & Destructor */

ClapTrap::ClapTrap( void )
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10)
				, _energyPoints(10), _AttackDamage(0)
{
	std::cout << "Parametre constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Desctructor called" << std::endl;
}

/* ========================================== */

/* Methods */

void	ClapTrap::attack(std::string const& target)
{
	std::cout << "ClapTrap " << _name << " attack " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " has taken " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " Healed for " << amount << " points!" << std::endl;
}

std::string ClapTrap::getName( void ) const
{
	return _name;
}

/* ========================================== */

/* Operators overload */

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_AttackDamage = rhs._AttackDamage;
	}
	
	return *this;
}

/* ========================================== */