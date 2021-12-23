/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:58:41 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/23 17:20:12 by hboudhir         ###   ########.fr       */
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

void	Data::publicMemberFunction( void ){}