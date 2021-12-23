/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:05:29 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/23 16:14:58 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int get_complain(std::string str)
{
    std::string cmd[4]={"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    while (i < 4)
    {
       if (cmd[i] == str)
        return i;
        i++;
    }
    return -1;
}

int main(int ac, char *av[])
{
    Karen sample;
	int	id;
    if (ac != 2)
    {
        std::cout << "Too many arguments!" << std::endl;
       return 1;
    }
    id = get_complain(av[1]);
	
    switch (id)
    {
       case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            sample.complain("DEBUG");
			break ;
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            sample.complain("INFO");
			break ;
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            sample.complain("WARNING");
			break ;
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            sample.complain("ERROR");
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problem ]" << std::endl;
    }
    
}