/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:30:56 by boodeer           #+#    #+#             */
/*   Updated: 2021/12/11 13:49:07 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

 int main( void )
 {
	ScavTrap instance("Booby Trap 001");

	instance.attack("Corrector");
	instance.beRepaired(1000);
	instance.takeDamage(1000000);
	instance.guardGate();
	return (0);
 }