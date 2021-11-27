/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 07:58:24 by hboudhir          #+#    #+#             */
/*   Updated: 2021/11/27 09:42:05 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack( void )
{
	std::cout << _name << " attacks with his " << weapon->getType() << std::endl;
}

HumanB::HumanB (std::string name) : _name(name)
{
	
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}