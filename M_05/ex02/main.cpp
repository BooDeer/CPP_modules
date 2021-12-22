/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:05:55 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/21 20:32:58 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	{
		try
		{
			Bureaucrat tyran("BooDeer", 1);
			Form		truce("Bluff", 10, 10);
			tyran.signForm(truce);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		try
		{
			Bureaucrat tyran("Wojak", 140);
			Form		truce("Happiness", 10, 10);
			tyran.signForm(truce);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}		
	}
	
	return (0);
}
