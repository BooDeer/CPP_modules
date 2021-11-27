/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 08:12:25 by hboudhir          #+#    #+#             */
/*   Updated: 2021/11/27 09:30:10 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType ( void ) const {
	return this->_str;
}

void	Weapon::setType (std::string type) {
	_str = type;
}

Weapon::Weapon(std::string str) : _str(str)
{
	
}