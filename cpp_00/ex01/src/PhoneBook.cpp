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

void	PhoneBook::reorder()
{
	Contact	save;
	save = this->contacts[0];
	for (int i = 0; i < 7; i++)
		this->contacts[i] = this->contacts[i + 1];
	this->contacts[7] = save;
	
}

void	PhoneBook::create_contact()
{
	std::string input;
	static int	index = 0;

	if (index == 8)
	{
		index = 0;
		std::cout << "Replacing oldest contact" << std::endl;
	}
	std::cout << "Insert the First Name: ";
	std::getline (std::cin, input, '\n');
	while (input[0] == '\0')
	{
		std::cout << "error: Invalid input" << std::endl;
		std::cout << "Insert the First Name: ";
		std::getline (std::cin, input, '\n');
	}
	this->contacts[index].add_fname(input);
	std::cout << "Insert the Last Name: ";
	std::getline (std::cin, input, '\n');
	while (input[0] == '\0')
	{
		std::cout << "error: Invalid input" << std::endl;
		std::cout << "Insert the Last Name: ";
		std::getline (std::cin, input, '\n');
	}
	this->contacts[index].add_lname(input);
	std::cout << "Insert a Nickname: ";
	std::getline (std::cin, input, '\n');
	while (input[0] == '\0')
	{
		std::cout << "error: Invalid input" << std::endl;
		std::cout << "Insert a Nickname: ";
		std::getline (std::cin, input, '\n');
	}
	this->contacts[index].add_nickname(input);
	std::cout << "Insert the darkest secret: ";
	std::getline (std::cin, input, '\n');
	while (input[0] == '\0')
	{
		std::cout << "error: Invalid input" << std::endl;
		std::cout << "Insert the darkest secret: ";
		std::getline (std::cin, input, '\n');
	}
	this->contacts[index].add_secret(input);
	std::cout << "Insert the Phone Number: ";
	std::getline (std::cin, input, '\n');
	while (input[0] == '\0' || !valid_nb(input) || input.length() > 9)
	{
		std::cout << "error: Invalid input" << std::endl;
		std::cout << "Insert the Phone Number: ";
		std::getline (std::cin, input, '\n');
	}	
	this->contacts[index].add_ph_nbr(atoi(input.c_str()));
	
	if (this->ind != 7)
		this->ind = index;
	else
		this->reorder();
	if (index != 8)
		index++;
}

void	PhoneBook::search_contact()
{
	int			i = -1;
	std::string	input;
	int			num_in;

	if (this->ind < 0)
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
		std::cout << "|" << "         " << i + 1 << "|";
		this->contacts[i].print_fname();
		this->contacts[i].print_lname();
		this->contacts[i].print_nickname();
		std::cout << std::endl;
	}
	std::cout << std::endl << "Enter the index of the Contact > ";
	std::getline (std::cin, input, '\n');
	num_in = atoi(input.c_str());
	while (num_in < 0 || num_in > this->ind + 1)
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
