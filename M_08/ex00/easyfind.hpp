#pragma once

#include <iostream>
#include <vector>

class OccurrenceNotFoundException: public std::exception
{
	virtual const char* what() const throw()
	{
		return "Element not found in the array";
	}
};

template <typename T>
int	easyfind(T container, int i)
{
	typename T::iterator itrB;
	typename T::iterator itrE;
	int			index = 0;

	itrB = container.begin();
	itrE = container.end();

	for (itrB = container.begin(); itrB != container.end(); itrB++)
	{
		index++;
		if (*itrB == i)
			return index;
	}
	throw ::OccurrenceNotFoundException();
	return -1;
}	
