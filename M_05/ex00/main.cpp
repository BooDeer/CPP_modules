/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:05:55 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/19 20:31:39 by hboudhir         ###   ########.fr       */
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
			
		}
		catch
		{
			
		}
		
	}
	{
		/* ========== High Grade  ========= */
		try
		{
			Bureaucrat zombie("George", 0);
		}
		catch
		{
			
		}

	}
	{
		/* ======== Valide Grade  ======== */
		try
		{
			Bureaucrat valide("Putin", 1);
		}
		catch
		{
			
		}
		

	}
	
	return (0);
}