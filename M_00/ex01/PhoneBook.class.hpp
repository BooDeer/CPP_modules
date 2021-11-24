/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:22:00 by hboudhir          #+#    #+#             */
/*   Updated: 2021/11/23 17:20:33 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include "Contact.class.hpp"

# define CYAN "\033[36m"
# define DEFAULT "\033[0m"
# define PINK_BG "\033[45m"


class PhoneBook {
	private:
		int	_i; // Index of current contact to fill.
  public:
    PhoneBook( void ); // Constructor
	void	addContact( void ); // fill input data in the (i) contact
	void	showContacts( void );
	Contact	Contacts[8];
};
#endif