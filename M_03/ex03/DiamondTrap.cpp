/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:46:02 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/12 15:46:14 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* (Con/De)structors */

DiamondTrap::DiamondTrap( void )
{
  std::cout << "[DiamondTrap] Default constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name )
{
  std::cout << "[DiamondTrap] constructor has been called" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
  std::cout << "[DiamondTrap] Destructor has been called" << std::endl;
}