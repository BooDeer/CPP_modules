/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:11:05 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/19 20:33:37 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{
	std::cout << "[Bureaucrat] Default contructor has been called" << std::cout;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "[Bureaucrat] Destructor has been called" << std::cout;
}

Bureaucrat::Bureaucrat( std::string name, int grade )
{
	// check name and grade's value.
	if (name.empty())
		_name = "chump";
	_name = name;
	
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException;
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	*this = src;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& rhs )
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_grade = rhs._grade;
	}
	return *this;
}