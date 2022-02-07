/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:47:45 by boodeer           #+#    #+#             */
/*   Updated: 2022/02/07 17:33:33 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>

void	displayInt(int i)
{
	std::cout << i << std::endl;
}

// int main ( void )
// {
// 	std::vector<int> v;
	
// 	v.push_back(10);
// 	v.push_back(1);
// 	v.push_back(2);
// 	v.push_back(3);
// 	v.push_back(6);
// 	v.push_back(100);
// 	for_each(v.begin(), v.end(), displayInt);	

int main ( void )
{
	std::vector<int> sample;	
	

	sample.push_back(1);
	sample.push_back(2);
	sample.push_back(3);
	sample.push_back(6);
	sample.push_back(4);
	sample.push_back(9);

	try
	{
		std::cout << easyfind(sample, 9) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}