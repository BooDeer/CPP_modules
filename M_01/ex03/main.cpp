/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 06:48:49 by hboudhir          #+#    #+#             */
/*   Updated: 2021/11/27 09:34:24 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

int main( void )
{
	{
		Weapon	club = Weapon ("Weapon a");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("Weapon b");
		bob.attack();
	}
	{
		Weapon	club = Weapon("Weapon a");
		HumanB jim("jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("Weapon b");
		jim.attack();
	}
	return (0);
}