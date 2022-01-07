/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 12:28:14 by hboudhir          #+#    #+#             */
/*   Updated: 2022/01/07 12:44:02 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>

void	displayInt(int i)
{
	std::cout << i << std::endl;
}

int main ( void )
{
	std::vector<int> v;
	
	v.push_back(10);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(6);
	v.push_back(100);
	for_each(v.begin(), v.end(), displayInt);	
	
	return (0);
}