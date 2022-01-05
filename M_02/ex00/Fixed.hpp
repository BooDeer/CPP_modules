#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed( void );
		Fixed(const Fixed& src);
		Fixed& 	operator=(const Fixed& rhs);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		~Fixed( void );
	protected:

	private:
		static const int	_nBit = 8;
		int					_fp;
};

#endif