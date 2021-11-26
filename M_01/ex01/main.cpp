/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:58:47 by hboudhir          #+#    #+#             */
/*   Updated: 2021/11/26 14:28:47 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie *zeHorde;
	int		N;

	N = 5;
	zeHorde = zombieHorde(N, "BooDeer");
	for (int i = 0; i < N; i++)
		zeHorde[i].announce();
	delete [] zeHorde;
	return (0);
}