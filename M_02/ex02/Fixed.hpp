/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 08:39:11 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/08 18:03:58 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

/*
	The class goes as follow:
		- Constructors ==> Destructors ==> Operator overloaders ==> Methods.
*/
class	Fixed {
	public:
		Fixed ( void ); 					// canonical
		Fixed (const Fixed& src ); 				// canonical
		Fixed ( const int i );
		Fixed ( const float f);
		~Fixed( void );						// canonical
		Fixed&	operator=( Fixed const& rhs);	// canonical
		// comparison operators
		bool	operator>(Fixed const& rhs) const;
		bool	operator<(Fixed const& rhs) const;
		bool	operator<=(Fixed const& rhs) const;
		bool	operator>=(Fixed const& rhs) const;
		bool	operator==(Fixed const& rhs) const;
		bool	operator!=(Fixed const& rhs) const;
		// arithmetic operators
		Fixed	operator+(Fixed const& rhs) const;
		Fixed	operator-(Fixed const& rhs) const;
		Fixed	operator*(Fixed const& rhs) const;
		Fixed	operator/(Fixed const& rhs) const;
		// (in/dec)rement operators
		Fixed	operator++();
		Fixed	operator++(int);
		Fixed	operator--();
		Fixed	operator--(int);
		//Methods
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat ( void ) const;
		int		toInt( void ) const;
	private:
		static const int	_nBit = 8;
		int					_fp;
};

std::ostream& operator<<( std::ostream& o,  Fixed const& rhs);
#endif