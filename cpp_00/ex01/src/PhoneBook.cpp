#include "../include/PhoneBook.hpp"

static bool	valid_nb(std::string str)
{
	int	i = -1;

	while (str[++i])
	{
		if (isdigit(str[i]) == 0)
			return (false);
	}
	return (true);
}

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
		std::cout << "error: Invalid input" << std::endl;
		std::cout << "Insert the First Name: ";
		std::getline (std::cin, input, '\n');
	}
	this->contacts[index - 1].add_fname(input);
	std::cout << "Insert the Last Name: ";
	std::getline (std::cin, input, '\n');
	while (input[0] == '\0')
	{
		std::cout << "error: Invalid input" << std::endl;
		std::cout << "Insert the Last Name: ";
		std::getline (std::cin, input, '\n');
	}
	this->contacts[index - 1].add_lname(input);
	std::cout << "Insert a Nickname: ";
	std::getline (std::cin, input, '\n');
	while (input[0] == '\0')
	{
		std::cout << "error: Invalid input" << std::endl;
		std::cout << "Insert a Nickname: ";
		std::getline (std::cin, input, '\n');
	}
	this->contacts[index - 1].add_nickname(input);
	std::cout << "Insert the darkest secret: ";
	std::getline (std::cin, input, '\n');
	while (input[0] == '\0')
	{
		std::cout << "error: Invalid input" << std::endl;
		std::cout << "Insert the darkest secret: ";
		std::getline (std::cin, input, '\n');
	}
	this->contacts[index - 1].add_secret(input);
	std::cout << "Insert the Phone Number: ";
	std::getline (std::cin, input, '\n');
	while (input[0] == '\0' || !valid_nb(input))
	{
		std::cout << "error: Invalid input" << std::endl;
		std::cout << "Insert the Phone Number: ";
		std::getline (std::cin, input, '\n');
	}	
	this->contacts[index - 1].add_ph_nbr(atoi(input.c_str()));
	if (this->ind != 8)
		this->ind = index;
	index++;
}

void	PhoneBook::search_contact()
{
	int			i = 0;
	std::string	input;
	int			num_in;

	if (this->ind <= 0)
	{
		std::cout << "This phonebook is empty" << std::endl << std::endl;
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
	std::cout << std::endl << "Enter the index of the Contact > ";
	std::getline (std::cin, input, '\n');
	num_in = atoi(input.c_str());
	while (num_in < 1 || num_in > this->ind)
	{
		std::cout << "error: Invalid input" << std::endl;
		std::cout << "Enter the index of the Contact > ";
		std::getline (std::cin, input, '\n');
		num_in = atoi(input.c_str());
	}
	this->contacts[num_in - 1].full_display();

}

void	PhoneBook::start_PhoneBook()
{
	this->ind = 0;
}
