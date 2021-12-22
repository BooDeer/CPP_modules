/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:52:57 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/21 21:10:44 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void ): _name("Random"), _execGrade(10),
					_signGrade(10), _signed(false)
{
	std::cout << "[Form] Default constructor has been called" << std::endl;
}

Form::Form(std::string name, int execGrade, int signGrade): _name(name),
				_execGrade(execGrade), _signGrade(signGrade), _signed(false)
{
	if (execGrade < 1 || signGrade < 1)
		throw Form::GradeTooHighException();
	else if (execGrade > 150 || signGrade > 150)
		throw Form::GradeTooLowException();
	
}
Form::Form(const Form& src): _name(src._name), _execGrade(src._execGrade),
							_signGrade(src._signGrade), _signed(src._signed)
{
	*this = src;
}

Form::~Form( void ){}

std::string	Form::getName( void ) const
{
	return _name;
}

int	Form::getExecGrade( void ) const
{
	return _execGrade;
}

int	Form::getSignGrade( void ) const
{
	return _signGrade;
}

bool	Form::getSigned( void ) const
{
	return _signed;
}

void	Form::beSigned(Bureaucrat& src)
{
	if (src.getGrade() > _signGrade)
	{
		src.signForm(*this);
		throw Form::GradeTooLowException();
	}
	else
		src.signForm(*this);
	_signed = true;
}

Form& Form::operator=(const Form& rhs)
{
	if (this != &rhs)
		_signed = rhs._signed;

	return *this;
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("The given grade is too low");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("The given grade is too high");
}


std::ostream& operator<<(std::ostream& os, const Form& rhs)
{
	os << "Form's name: " << rhs.getName() << " of execution grade: " << rhs.getExecGrade() << " , it can be signed by a bureaucrat of grade of " << rhs.getSignGrade() << " and above only. . ." << std::endl << "Current state:";
	if (rhs.getSigned())
		os << " signed." << std::endl;
	else
		os << " not signed." << std::endl;

	return os;
}