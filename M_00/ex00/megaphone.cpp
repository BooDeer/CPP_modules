/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:57:11 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/18 10:30:45 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int	main(int ac, char **av)
{
	std::string tmp;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; av[i]; i++)
			for (int j = 0; av[i][j]; j++)
				std::cout << (char)toupper(av[i][j]);
	std::cout << std::endl;
}