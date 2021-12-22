/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:14:13 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/22 10:43:36 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"

ShruberryCreationForm::ShruberryCreationForm( void ): Form("Dummy", 1, 1)
{}

ShruberryCreationForm::ShruberryCreationForm( std::string target): Form(target, 137, 145)
{
	
}
ShruberryCreationForm::~ShruberryCreationForm( void ){}


ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm& src)
{
	*this = src;
}

ShruberryCreationForm& ShruberryCreationForm::operator=(const ShruberryCreationForm& rhs)
{
	
	return *this;
}