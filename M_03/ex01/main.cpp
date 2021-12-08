/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boodeer <boodeer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:30:56 by boodeer           #+#    #+#             */
/*   Updated: 2021/12/02 21:34:22 by boodeer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ClapTrap.hpp"

 int main( void )
 {
	ClapTrap instance1("Instance I");
	ClapTrap instance2("Instance II");

	instance1.attack("Instance 2");
	instance2.takeDamage(200);
	instance2.beRepaired(200);
	return (0);
 }