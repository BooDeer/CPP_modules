/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:46:14 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/12 14:56:23 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* (Con/De)structors */

FragTrap::FragTrap( void )
{
  std::cout << "[FragTrap] Default constructor has been called" << std::endl;
}

FragTrap::FragTrap( std::string name) : ClapTrap(name)
{
  std::cout << "[FragTrap] constructor has been called" << std::endl;
  _hitPoints = 100;
  _energyPoints = 100;
  _AttackDamage = 30;
}

FragTrap::~FragTrap( void )
{
  std::cout << "[FragTrap] Destructor has been called" << std::endl;
}

/* Operators overload */

FragTrap& FragTrap::operator=( const FragTrap& rhs )
{
	std::cout << "[FragTrapp] assignement operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_AttackDamage = rhs._AttackDamage;
	}
	return *this;
}

/* Methods */

void	FragTrap::highFivesGuys( void )
{
	std::cout << "High five required from the homiiiies!" << std::endl;
	std::cout << "High five received from the homiiiies!" << std::endl;
}