#include "../include/PhoneBook.hpp"

void	PhoneBook::create_contact()
{
	std::string input;
	static int	index = 1;

	if (index == 8)
	{
		std::cout << "Replacing oldest contact";
		index = 1;
	}
	std::cout << "Insert the First Name: ";
	std::getline (std::cin, input, '\n');
	while (input[0] == '\0')
	{
		std::cout << "error: Empty" << std::endl;
		std::cout << "Insert the First Name: ";
		std::getline (std::cin, input, '\n');
	}
	this->contacts[index - 1].add_fname(input);
	std::cout << "Insert the Last Name: ";
	std::getline (std::cin, input, '\n');
	while (input[0] == '\0')
	{
		std::cout << "error: Empty" << std::endl;
		std::cout << "Insert the Last Name: ";
		std::getline (std::cin, input, '\n');
	}
	this->contacts[index - 1].add_lname(input);
	std::cout << "Insert a Nickname: ";
	std::getline (std::cin, input, '\n');
	while (input[0] == '\0')
	{
		std::cout << "error: Empty" << std::endl;
		std::cout << "Insert a Nickname: ";
		std::getline (std::cin, input, '\n');
	}
	this->contacts[index - 1].add_nickname(input);
	std::cout << "Insert the darkest secret: ";
	std::getline (std::cin, input, '\n');
	while (input[0] == '\0')
	{
		std::cout << "error: Empty" << std::endl;
		std::cout << "Insert the darkest secret: ";
		std::getline (std::cin, input, '\n');
	}
	this->contacts[index - 1].add_secret(input);
	std::cout << "Insert the Phone Number: ";
	std::getline (std::cin, input, '\n');
	while (input[0] == '\0')
	{
		std::cout << "error: Empty" << std::endl;
		std::cout << "Insert the Phone Number: ";
		std::getline (std::cin, input, '\n');
	}	
	this->contacts[index - 1].add_ph_nbr(input);
	if (this->ind != 8)
		this->ind = index;
	index++;
}

void	PhoneBook::search_contact()
{
	int	i = 0;

	if (this->ind <= 0)
	{
		std::cout << "This phonebook is empty" << std::endl;
		return ;
	}
	std::cout << "|" << "     INDEX" << "|";
	std::cout << "FIRST NAME" << "|";
	std::cout << " LAST NAME" << "|";
	std::cout << "  NICKNAME" << "|" << std::endl;
	while (++i <= this->ind)
	{
		std::cout << "|" << "         " << i << "|";
		this->contacts[i - 1].print_fname();
		this->contacts[i - 1].print_lname();
		this->contacts[i - 1].print_nickname();
		std::cout << std::endl;
	}

	// falta la parte de recibir un numero y poner solo la info de ese contacto
}

void	PhoneBook::start_PhoneBook()
{
	this->ind = 0;
}
