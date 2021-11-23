/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 07:30:50 by hboudhir          #+#    #+#             */
/*   Updated: 2021/11/23 17:04:51 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP



// #include "PhoneBook.class.hpp"
#include <iostream>

class Contact {
    public:
        Contact( void );
        ~Contact( void );
		bool	getEmpty ( void ) const;
		std::string getPn( void ) const;
		std::string getFn( void ) const;
		std::string getLn( void ) const;
		std::string getNm( void ) const;
		std::string getDs( void ) const;
		void		setEmpty(bool var);
		void		setPn(std::string var);		
		void		setFn(std::string var);
		void		setLn(std::string var);
		void		setNm(std::string var);		
		void		setDs(std::string var);		
	private:
		bool		_empty;
        std::string	_PhoneNumber;
        std::string	_FirstName;
        std::string _LastName;
        std::string _Nickname;
        std::string _DarkestSecret;
};

#endif