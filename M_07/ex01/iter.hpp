#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* arr, int len, void(*iterFunc)(T const &))
{
	for(int i = 0; i < len; i++)
		(*iterFunc)(arr[i]);
}
template <typename T>
void	print(T i)
{
	std::cout << i << std::endl;	
}
#endif