/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:58:47 by hboudhir          #+#    #+#             */
/*   Updated: 2021/11/26 11:56:55 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie* zombie;
	zombie = newZombie("BooDeer");
	zombie->announce();
	randomChump("Big chungus");
	delete zombie;
}