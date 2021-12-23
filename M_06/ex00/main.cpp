/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:38:18 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/23 13:48:29 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	convert_to_char(std::string str)
{
	char	converted;
	if (str.length() > 1)
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	converted = static_cast<char>(str[0]);
	if (isprint(converted))
		std::cout << "char : " << converted << std::endl;
	else
		std::cout << "char : Non displayable" << std::endl;
}

int main(int ac, char **av)
{
	char	tmpChar;
	int		tmpInt;
	float	tmpFloat;
	double	tmpDouble;

	if (ac != 2)
	{
		std::cerr << "Only one argument is accepted!" << std::endl;
		return (1);
	}
	convert_to_char(av[1]);
	
	return (0);
}

/* 
class A{};
class B: public A{
	A a;
};





class Animal
{
	std::string name;
	int			legs;
};

class Cat
{
	std::string name;
	int			legs;
	void	makesound();
};


class Dog
{
	std::string name;
	int			legs;
};


 */