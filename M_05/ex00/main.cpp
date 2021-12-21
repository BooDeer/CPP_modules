/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:05:55 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/20 20:40:56 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int	main( void )
{
	{
		/* ========== Low Grade  ========== */
		try
		{
			Bureaucrat newbie("Trump", 420);
			std::cout << newbie << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl << std::endl;
		}
		
	}
	
	{
		/* ========== High Grade  ========= */
		try
		{
			Bureaucrat zombie("George", 0);
			std::cout << zombie << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl << std::endl;
		}

	}

	{
		/* ======== Valide Grade  ======== */
		try
		{
			Bureaucrat valide("Putin", 1);
			std::cout << valide << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl << std::endl;
		}
		

	}
	
	{
		try
		{
			Bureaucrat upToTheHeaven("Zeppelin", 1);
			upToTheHeaven.incGrade();
			std::cout << upToTheHeaven << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl << std::endl;
		}
		
	}
	
	{
		try
		{
			Bureaucrat highWayToHell("ACDC", 150);
			highWayToHell.decGrade();
			std::cout << highWayToHell << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		
	}
	return (0);
}
