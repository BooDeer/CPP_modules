#pragma once

#include <iostream>
#include <vector>
#include <algorithm>


class Span
{
	public:
		Span( unsigned int N );
		Span(const Span& src);
		Span& operator=(const Span& rhs);
		~Span( void );
		void	addNumber( const int N );
		void	shortestSpan( void ) const;
		void	longestSpan( void ) const;
		void	spanDebug( void ) const;
		class	SpanException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class	NoSpan: public std::exception
		{
			virtual const char* what() const throw();
		};
	protected:

	private:
		unsigned int _size;
		Span( void );
		std::vector<int> _intVec;
		unsigned int _currSize;
};