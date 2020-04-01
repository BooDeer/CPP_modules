#include <iostream>
#include <string>


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

void	truncat_data(std::string str)
{
	if (str.length() > 10)
		str[9] = '.';
	std::cout << str.substr(0,10);
	if (str.length() < 10)
		std::cout << std::string(10 - str.length(), ' ');
	std::cout << '|';
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
