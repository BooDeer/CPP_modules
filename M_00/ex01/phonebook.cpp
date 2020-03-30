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
		void	display_contacts(contact display);
};

int		main()
{
	std::string value;
	
	int  i;
	i = -1;
	phonebooks *phonebook = new phonebooks();	
	while (1)
	{
		std::cout << "Would you add a contact or search for a contact or to end the program?" << std::endl;
		getline(std::cin, value);
		if (value == "ADD" && ++i < 8)
			phonebook->contacts[i] = phonebook->add_contact(phonebook->contacts[i]);
		else if (value == "SEARCH")
			phonebook->display_contacts(contacts);
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

void		display_contacts(contact display)
{
	int	i;

	i = -1;
	while (++i < 8)
		if (display[i].first_name)
		{

		}
}
