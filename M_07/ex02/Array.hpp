#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>


template <typename T>
class Array
{
	public:
		Array( void );
		Array( unsigned int N );
		Array( const Array& src );
		Array<T>&	operator=( const Array& rhs );
		// T			operator[](const int index) const;
		T&			operator[](const int index);
		size_t		size( void ) const;
		~Array( void );
		class OutBoundariesException: public std::exception
		{

			virtual const char* what() const throw();
		};
	protected:

	private:
		size_t	_arrayLen;
		T*		_arr;
};


/* ====================== */


template <typename T>
Array<T>::Array( const Array& src )
{
	*this = src;
}

template <typename T>
Array<T>& Array<T>::operator=( const Array& rhs )
{
	if ( this != &rhs )
	{
		this->_arrayLen = rhs._arrayLen;
		this->_arr = new T[rhs._arrayLen];
		for (size_t i = 0; i < rhs._arrayLen; i++)
		{
			this->_arr[i] = T(rhs._arr[i]);
		}
	}
	return *this;
}


template <typename T>
Array<T>::Array( void ): _arrayLen(0)
{
	_arr = new T[0];
}

template <typename T>
Array<T>::Array( unsigned int N ): _arrayLen(N)
{
	_arr = new T[N];
}

template <typename T>
const char* Array<T>::OutBoundariesException::what() const throw()
{
	return ("The given index is out of boundaries.");
}

template <typename T>
T&	Array<T>::operator[](const int index)
{
	if (index >= 0 && index < static_cast<int>(_arrayLen))
	{
		return _arr[index];
	}
	else
		throw Array<T>::OutBoundariesException();
}

template <typename T>
size_t	Array<T>::size( void ) const
{
	return _arrayLen;
}

/* Setter version of the operator [] */

// template <typename T>
// T&	Array<T>::operator[](const int index)
// {
// 	if (index >= 0 && index < _arrayLen)
// 	{
// 		return _arr[index];
// 	}
// }

template <typename T>
Array<T>::~Array( void )
{

}


#endif