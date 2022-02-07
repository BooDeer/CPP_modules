/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boodeer <boodeer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 04:54:38 by boodeer           #+#    #+#             */
/*   Updated: 2022/01/15 11:25:22 by boodeer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( void ) {}

Span::Span( unsigned int N ): _size(N), _currSize(0)
{
	std::cout << "storing " << N << " elements" << std::endl;
}

Span::Span(const Span& src)
{
	*this = src;
}

Span&	Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		_size = rhs._size;
		_currSize = rhs._currSize;
		_intVec = rhs._intVec;
	}
	return *this;
}

Span::~Span( void ) {}

void	Span::addNumber( const int N )
{
	if (_currSize == _size)
		throw Span::SpanException();
	_intVec.push_back(N);
	_currSize++;
	return ;
}

void	Span::shortestSpan( void ) const
{
	if (_currSize < 2)
		throw Span::NoSpan();
	std::vector<int>tmp = _intVec;
	std::sort(tmp.begin(), tmp.end());	
	std::cout << tmp[0] << std::endl;}

void	Span::longestSpan( void ) const
{
	if (_currSize < 2)
		throw Span::NoSpan();
	std::vector<int>tmp = _intVec;
	std::sort(tmp.begin(), tmp.end());	
	std::cout << tmp[_currSize - 1] << std::endl;
}

const char*	Span::SpanException::what() const throw()
{
	return ("Index out of container's range!");
}

const char*	Span::NoSpan::what() const throw()
{
	return ("There's less than two elements.");
}
void	Span::spanDebug( void ) const
{
	
	std::vector<int>::const_iterator itr = _intVec.begin();


	for (; itr != _intVec.end(); itr++)
		std::cout << *itr << std::endl;
}