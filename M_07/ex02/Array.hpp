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
		T			operator[](int index) const;
		T&			operator[](int index);
		~Array( void );
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
		this->_arr = new T[rhs->_arrayLen];
		for (int i = 0; i < rhs->_arrayLen; i++)
		{
			this->_arr[i] = rhs._arr[i];
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
T	Array<T>::operator[](const int index) const
{
	if (index >= 0 && index < _arrayLen)
	{
		return _arr[index];
	}
	else
		throw std::exception();
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