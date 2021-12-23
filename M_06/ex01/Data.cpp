/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:58:41 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/23 18:26:05 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void ){};

Data::~Data( void ){};

Data::Data( const Data& src)
{
	*this = src;
}

Data& Data::operator=(const Data& rhs)
{
	if (this != &rhs)
	{
		_somePrivateData = rhs._somePrivateData;
		_anotherPrivateData = rhs._anotherPrivateData;
	}
	return *this;
}

void	Data::getData( void ) const
{
	std::cout << "1- " << _somePrivateData << std::endl;
	std::cout << "2- " << _anotherPrivateData << std::endl;
	return ;
}

void	Data::setData(int i, std::string str)
{
	_somePrivateData = i;
	_anotherPrivateData = str;
}