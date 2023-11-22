#include "../include/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	agenda;
	std::string	input;

	agenda.start_PhoneBook();
	while (input != "EXIT")
	{
		std::cout << "Please choose between one of the following options:" << std::endl;
		std::cout << "----- ADD -----" << std::endl;
		std::cout << "--- SEARCH ---" << std::endl;
		std::cout << "----- EXIT -----" << std::endl;
		std::cout << "> ";
		std::cin >> input;
		std::cin.ignore();
		if (input[0] == '\0')
			input = "EXIT";
		else if (input == "ADD")
			agenda.create_contact();
		else if (input == "SEARCH")
			agenda.search_contact();
		else if (input.compare("EXIT"))
			std::cout << "error: not a valid option" << std::endl;	
	}
	return (0);
}