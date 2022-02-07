/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boodeer <boodeer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 04:01:30 by boodeer           #+#    #+#             */
/*   Updated: 2022/01/15 11:34:30 by boodeer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int	main( void )
{
	try
	{
		Span vec(5);

		vec.addNumber(5);
		vec.addNumber(123);
		vec.shortestSpan();
		vec.addNumber(5123123);
		vec.addNumber(2341123);
		vec.spanDebug();
		std::cout << std::endl << std::endl;
		vec.longestSpan();
		vec.shortestSpan();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}