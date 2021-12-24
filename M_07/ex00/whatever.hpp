#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T & x, T & y)
{
	T tmp;
	
	tmp = y;
	y = x;
	x = tmp;
}

template <typename T>
T& min(T & x, T & y)
{
	return ((x>=y) ? y : x);
}

template <typename T>
T& max(T & x, T & y)
{
	return ((x>=y) ? x : y);
}

#endif