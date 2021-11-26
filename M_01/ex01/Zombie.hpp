/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:41:01 by hboudhir          #+#    #+#             */
/*   Updated: 2021/11/26 13:16:51 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
# define DEFAULT "\033[0m"
# define RED_BG "\033[31m"

class Zombie
{
private:
	std::string _name;

public:
	Zombie( void );
	Zombie(std::string name);
	~Zombie();
	void	setName(std::string name);
	void	announce( void );
};


Zombie*	newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif