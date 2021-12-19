/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:41:01 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/18 11:12:04 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
# define DEFAULT "\033[0m"
# define RED_BG "\033[31m"

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce( void );
	private:
		std::string _name;
};


Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
#endif