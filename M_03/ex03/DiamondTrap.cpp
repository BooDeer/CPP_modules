/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:46:02 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/15 16:38:51 by hboudhir         ###   ########.fr       */
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
/* 
position = x + y * max-width */
/*
	pos (x,y) x = 0 --> max-width ||| y = 0 --> max-height
   0         max = 5		
	x x x x x	
	x x x x x	x = (0,1) ==> [0][1]
	x x x x x	
	x x x x x	
	x x x x [x]	
	max

	x x x x x,x x x x x,x x x x x,x x x x x,x x x x [x]  || x = 5 str[5]

*/