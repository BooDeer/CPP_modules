#pragma once

#include <iostream>
#include <vector>

template <typename T>
bool	easyfind(T container, int i)
{
	T::iterator itrB;
	T::iterator itrE;

	itrB = container.begin();
	itrE = container.end();

	for (itrB = container.begin(); itrB != container.end(); itrB++)
		if (*itrB == i)
			return true;
	return false;
}	