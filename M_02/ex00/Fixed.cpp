/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 03:32:05 by hboudhir          #+#    #+#             */
/*   Updated: 2022/01/05 06:18:47 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ): _fp(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed&	Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		_fp = rhs._fp;
	return *this;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	
	return _fp;
}

void	Fixed::setRawBits( int const raw )
{
	_fp = raw;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}