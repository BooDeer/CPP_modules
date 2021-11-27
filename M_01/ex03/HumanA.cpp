/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 07:59:59 by hboudhir          #+#    #+#             */
/*   Updated: 2021/11/27 09:20:39 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack( void )
{
	std::cout << _name << " attacks with his " << weapon.getType() << std::endl;;
}

HumanA::HumanA (std::string name, Weapon& _weapon) : _name(name), weapon(_weapon)
{
}