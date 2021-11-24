/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:22:41 by hboudhir          #+#    #+#             */
/*   Updated: 2021/11/24 07:28:09 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <string>
#include <iomanip>
#include <sstream>
/*
class		contact
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_addr;
		std::string email_addr;
		std::string phone_nbr;
		std::string bday_date;
		std::string fav_meal;
		std::string under_col;
		std::string dark_secret;

};

class		phonebooks
{
	public:
		contact contacts[8];
		contact	add_contact(contact add);
		void	display_contact(contact display, int index);
};

void	truncat_data(std::string str);
void	display_info(contact display);

int		main()
{
	std::string		value;
	int			i;
	int			y;
	int			index;
	
	i = -1;
	phonebooks *phonebook = new phonebooks();	
	while (1)
	{
		std::cout << "Would you add a contact or search for a contact or to end the program?" << std::endl;
		getline(std::cin, value);
		if (value == "ADD" && ++i < 8)
			phonebook->contacts[i] = phonebook->add_contact(phonebook->contacts[i]);
		else if (value == "SEARCH")
		{
			y = -1;
			while (++y < 8)
				phonebook->display_contact(phonebook->contacts[y], y + 1);
			std::cout << "Which contact would you like to display: " << std::endl;
			std::cin >> index;
			if (index < 1 && index > 8)
				std::cout << "This index doesn't." << std::endl;
			else
				display_info(phonebook->contacts[index - 1]);

		}
			else if (value == "EXIT")
		{
			std::cout << "Exiting the program..." << std::endl;
			delete phonebook;
			return (0);
		}
		else if (i > 7)
			std::cout << "You already created 8 contacts, please exit the program." << std::endl;
		else
			std::cout << "ERROR" << std::endl;
	}
	return (0);
}

contact		phonebooks::add_contact(contact add)
{
	std::cout << "Please enter your first name: ";
	getline(std::cin, add.first_name);
	std::cout << "Please enter your last last: ";
	getline(std::cin, add.last_name);
	std::cout << "Please enter your nickname: ";
	getline(std::cin, add.nickname);
	std::cout << "Please enter your login: ";
	getline(std::cin, add.login);
	std::cout << "Please enter your postal address: ";
	getline(std::cin, add.postal_addr);
	std::cout << "Please enter your email address: ";
	getline(std::cin, add.email_addr);
	std::cout << "Please enter your phone number: ";
	getline(std::cin, add.phone_nbr);
	std::cout << "Please enter your birthday date: ";
	getline(std::cin, add.bday_date);
	std::cout << "Please enter your favorite meal: ";
	getline(std::cin, add.fav_meal);
	std::cout << "Please enter your underwear color owo... ";
	getline(std::cin, add.under_col);
	std::cout << "Please enter your darkess secret uwo: ";
	getline(std::cin, add.dark_secret);
	
	return (add);
}

void	phonebooks::display_contact(contact display, int index)
{
	if (!display.first_name.empty())
	{
		std::cout << "Index     |First Name|Last Name |Nickname  |" << std::endl;
		std::cout << index << "         |";
		truncat_data(display.first_name);
		truncat_data(display.last_name);
		truncat_data(display.nickname);
		std::cout << std::endl;
	}
}


void	display_info(contact display)
{
	if (!display.first_name.empty())
	{
		std::cout << "First name: " << display.first_name << std::endl;
		std::cout << "Last name: " << display.last_name << std::endl;
		std::cout << "Nickname :" << display.nickname << std::endl;
		std::cout << "Login :" << display.login << std::endl;
		std::cout << "Postal address :" << display.postal_addr << std::endl;
		std::cout << "Email address :" <<  display.email_addr << std::endl;
		std::cout << "Phone number :" << display.phone_nbr << std::endl;
		std::cout << "Birthday date :" << display.bday_date << std::endl;
		std::cout << "Favorite meal :" << display.fav_meal << std::endl;
		std::cout << "Underwear color :" << display.under_col << std::endl;
		std::cout << "Darkess secret :" << display.dark_secret << std::endl;
	}
	else
		std::cout << "An error occured, please try another command." << std::endl;
}
*/
std::string	truncat_data(std::string str)
{
	int	i = 10;

	if (str.length() > 10)
	{
		str[9] = '.';
		while (str[i])
			str[i++] = '\0';
	}
	return (str);
}

PhoneBook::PhoneBook( void ) {
	this->_i = 0;
}

void PhoneBook::addContact( void )
{
	std::string f_n, l_n, nick, d_s, p_n;
	
	std::cout << CYAN << "First Name: " << DEFAULT;
	std::getline(std::cin, f_n);
	std::cout << CYAN << "Last Name: " << DEFAULT;
	std::getline(std::cin, l_n);
	std::cout << CYAN << "Nickname: " << DEFAULT;
	std::getline(std::cin, nick);
	std::cout << CYAN << "Phone Number: " << DEFAULT;
	std::getline(std::cin, p_n);
	std::cout << CYAN << "Darkest Secret: " << DEFAULT;
	std::getline(std::cin, d_s);
	this->Contacts[this->_i].setFn(f_n);
	this->Contacts[this->_i].setLn(l_n);
	this->Contacts[this->_i].setNm(nick);
	this->Contacts[this->_i].setPn(p_n);
	this->Contacts[this->_i].setDs(d_s);
	this->Contacts[this->_i].setEmpty(false);
	if (this->_i == 7)
		this->_i = 0;
	else
		this->_i += 1;
}

void	PhoneBook::showContacts( void )
{
	int	index = 0;
	int	pos_int = 0;
	std::string	pos;

	std::cout << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "First Name";
	std::cout << "|" << std::setw(10) << "Last Name";
	std::cout << "|" << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (!this->Contacts[i].getEmpty())
		{
			std::cout << std::setw(10) << i << "|";
			std::cout << std::setw(10) << truncat_data(this->Contacts[i].getFn());
			std::cout << "|";
			std::cout << std::setw(10) << truncat_data(this->Contacts[i].getLn());
			std::cout << "|";
			std::cout << std::setw(10) << truncat_data(this->Contacts[i].getNm());
			// std::cout << "|";
			std::cout << std::endl;
		}
	}
	std::cout << "Selected the desired contact to show details: ";
	std::getline(std::cin, pos);
	pos.empty() ? pos_int = -999 : pos_int = std::stoi(pos);
	if (pos_int > 7 || pos_int < 0)
		std::cout << pos << "Invalid index" << std::endl;
	else
	{
		std::cout << "First Name      :" << this->Contacts[pos_int].getFn() << std::endl;
		std::cout << "Last Name       :" << this->Contacts[pos_int].getLn() << std::endl;
		std::cout << "Nickname        :" << this->Contacts[pos_int].getNm() << std::endl;
		std::cout << "Phone Number    :" << this->Contacts[pos_int].getPn() << std::endl;
		std::cout << "Darkest Secret  :" << this->Contacts[pos_int].getDs() << std::endl;
	}
}

int	main(void)
{
	std::string	cmd;

	PhoneBook sample;

	while (1)
	{
		std::cout << "Please enter the desired command: ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			sample.addContact();
			std::cout << "[Add code]" << std::endl;
		}
		else if (cmd == "SEARCH")
		{
			sample.showContacts();	
			// std::cout << "[Search code]" << std::endl;
		}
		else if (cmd == "EXIT")
		{
			std::cout << PINK_BG << "Goodbye my friend. (｡◕‿‿◕｡)";
			break ;
		}
	}
	std::cout << std::endl;
	return (0);
}