#include "../include/PhoneBook.hpp"

void	Contact::add_fname(std::string str)
{
	this->fname = str;
}

void	Contact::add_lname(std::string str)
{
	this->lname = str;
}

void	Contact::add_nickname(std::string str)
{
	this->nickname = str;
}

void	Contact::add_secret(std::string str)
{
	this->secret = str;
}

void	Contact::add_ph_nbr(std::string ph_nbr)
{
	this->ph_nbr = ph_nbr;
}


void	Contact::print_fname()
{
	std::string	str;
	int len;
	int	i = -1;

	str = this->fname;
	len =str.length();
	if (len > 10)
	{
		while (++i < 9)
			std::cout << str[i];
		std::cout << ".";
	}
	else
	{
		while (++i < 10 - len)
			std::cout << " ";
		i = -1;
		while (++i <= len)
			std::cout << str[i];
	}
	std::cout << "|";
}

void	Contact::print_lname()
{
	std::string	str;
	int len;
	int	i = -1;

	str = this->lname;
	len =str.length();
	if (len > 10)
	{
		while (++i < 9)
			std::cout << str[i];
		std::cout << ".";
	}
	else
	{
		while (++i < 10 - len)
			std::cout << " ";
		i = -1;
		while (++i <= len)
			std::cout << str[i];
	}
	std::cout << "|";
}

void	Contact::print_nickname()
{
	std::string	str;
	int len;
	int	i = -1;

	str = this->nickname;
	len =str.length();
	if (len > 10)
	{
		while (++i < 9)
			std::cout << str[i];
		std::cout << ".";
	}
	else
	{
		while (++i < 10 - len)
			std::cout << " ";
		i = -1;
		while (++i <= len)
			std::cout << str[i];
	}
	std::cout << "|";
}
