/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:11:05 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/20 17:48:28 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{
	std::cout << "[Bureaucrat] Default contructor has been called" << std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "[Bureaucrat] Destructor has been called" << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ): _name(name)
{
	// check name and grade's value.
	std::cout << "[Bureaucrat] Contructor has been called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();

	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	*this = src;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& rhs )
{
	if (this != &rhs)
		_grade = rhs._grade;
	return *this;
}

void	Bureaucrat::incGrade( void )
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::decGrade( void )
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

std::string Bureaucrat::getName( void ) const
{
	return _name;
}

int			Bureaucrat::getGrade( void ) const
{
	return _grade;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return os;
}
