/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 07:30:48 by hboudhir          #+#    #+#             */
/*   Updated: 2021/11/23 17:05:43 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact ( void ) {
    this->_empty = true;
}

Contact::~Contact ( void ) {
}

bool	Contact::getEmpty( void ) const {
	return this->_empty;
}
std::string Contact::getFn ( void ) const {
	return this->_FirstName;
}

std::string Contact::getLn ( void ) const {
	return this->_LastName;
}

std::string Contact::getNm ( void ) const {
	return this->_Nickname;
}

std::string Contact::getPn ( void ) const {
	return this->_PhoneNumber;
}

std::string Contact::getDs ( void ) const {
	return this->_DarkestSecret;
}

void	Contact::setEmpty (bool var) {
	this->_empty = var;
	return ;
}
void	Contact::setFn (std::string var) {
	this->_FirstName = var;
	return ;
}
void	Contact::setLn (std::string var) {
	this->_LastName = var;
	return ;
}
void	Contact::setNm (std::string var) {
	this->_Nickname = var;
	return ;
}
void	Contact::setPn (std::string var) {
	this->_PhoneNumber = var;
	return ;
}
void	Contact::setDs (std::string var) {
	this->_DarkestSecret = var;
	return ;
}
