/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:03:01 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/21 18:41:41 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	replaceOccurence(std::string line, std::string s1, std::string s2)
{
	int	i;

	while ((i = line.find(s1)) != (int)std::string::npos)
	{
		line.erase(i, s1.length());
		line.insert(i, s2);
	}
	return line;
}

int	main(int ac, char **av)
{
	std::string 	s1;
	std::string 	s2;
	std::string 	line;
	std::string		file_name;

	if ( ac != 4 )
	{
		std::cout << "Wrong number of arguments" << std::endl;	
		return (1);
	}
	file_name = av[1];
	std::ifstream f(file_name);
	s1 = av[2];
	s2 = av[3];
	if (!(f.good()))
	{
		std::cout << "Invalid input file" << std::endl;
		return (2);
	}
	if (s1.empty() || s2.empty())
	{
		std::cout << "Empty strings aren't valid" << std::endl;
		return (3);
	}
	std::ofstream	newfile(file_name + ".replace");
	while(std::getline(f, line))
	{
		newfile << replaceOccurence(line, s1, s2) << std::endl;
	}
	newfile.close();
	f.close();
	return (0);
}