/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 08:39:02 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/07 18:31:17 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructors */

Fixed::Fixed ( void ) : _fp(0)
{
	std::cout << "Default constructor called" << std::endl;	
}

Fixed::Fixed (const Fixed& src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed ( const int i )
{
	std::cout << "Int constructor called" << std::endl;
	_fp = i * (float)(1 << _nBit);
}

Fixed::Fixed ( const float f)
{
	std::cout << "Float constructor called" << std::endl;
	_fp = roundf(f * (float)(1 << _nBit));
}

/* ======================================== */

/* Destructor */

Fixed::~Fixed ( void )
{
	std::cout << "Destructor called" << std::endl;
}

/* Operators overload */

Fixed&	Fixed::operator= (Fixed const& rhs )
{
	std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
		this->_fp = rhs._fp;
	return *this;
}

bool	Fixed::operator>(Fixed const& rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const& rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const& rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const& rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const& rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const& rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const& rhs) const
{
	return ( Fixed(this->toFloat() + rhs.toFloat()) );
}

Fixed	Fixed::operator-(Fixed const& rhs) const
{
	return ( Fixed(this->toFloat() - rhs.toFloat()) );
}

Fixed	Fixed::operator*(Fixed const& rhs) const
{
	return ( Fixed(this->toFloat() * rhs.toFloat()) );
}

Fixed	Fixed::operator/(Fixed const& rhs) const
{
	return ( Fixed(this->toFloat() / rhs.toFloat()) );
}

Fixed	Fixed::operator++()
{
		
}

/* ======================================== */

/* Methods */

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fp;
}

void	Fixed::setRawBits ( int const raw )
{
	_fp = raw;
}

float	Fixed::toFloat( void ) const
{
	return (_fp / (float)(1 << _nBit));
}

int		Fixed::toInt ( void ) const
{
	return (_fp / (float)(1 << _nBit));
}

/* ======================================== */

std::ostream & operator<<( std::ostream & o,  Fixed const& rhs)
{
	o << rhs.toFloat();
	return o;
}
