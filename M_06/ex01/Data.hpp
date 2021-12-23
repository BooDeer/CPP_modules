#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data
{
	private:
		int				_somePrivateData;
		std::string		_anotherPrivateData;
	public:
		Data( void );
		~Data( void );
		Data(const Data& src);
		Data& operator=(const Data& rhs);
		void			publicMemberFunction( void );
};

#endif