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
		void	getData( void ) const;
		void	setData(int i, std::string str);
};

#endif