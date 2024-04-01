/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:35:17 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/04/01 11:52:28 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

RPN::RPN(){std::cout << "Haz feliz a una yolanthe" << std::endl;}

static bool	isoperand(char c)
{
	if (c == '+' || c == '-' || c == '/' || c == '*')
			return true;
	return false;
}

static void	parsingError(char c)
{
	std::cout << "token not recognized: " << c << std::endl;
	exit(1);
}

RPN::RPN(const std::string &str)
{
	for(size_t i = 0; i <= str.size() - 1; i++)
	{
		if (isdigit(str[i]) != 0)
			this->_numbers.push(atoi(&str[i]));
		else if (isoperand(str[i]))
			this->calculator(str[i]);
		else if (isspace(str[i]) == 0)
			parsingError(str[i]);
	}
	if (this->_numbers.size() != 1)
	{
		std::cout << "parsing error: not enough tokens" << std::endl;
		exit(1);
	}
	std::cout << this->_numbers.top() << std::endl;
}

RPN::RPN(const RPN &toCopy)
{
	this->_numbers = toCopy._numbers;
}

RPN::~RPN()
{
	
}

RPN &RPN::operator=(const RPN &toEqual)
{
	if (this != &toEqual)
	{
		this->_numbers = toEqual._numbers;
	}
	return (*this);
}

void	RPN::calculator(char c)
{
	if (this->_numbers.size() < 2)
	{
		std::cout << "parsing error: not enough numbers" << std::endl;
		exit (1);
	}
	int a = this->_numbers.top();
	this->_numbers.pop();
	int b = this->_numbers.top();
	this->_numbers.pop();
	int result;
	switch (c)
	{
	case '+':
		result = a + b;
		break ;
	case '-':
		result = b - a;
		break ;
	case '*':
		result = a * b;
		break ;
	case '/':
		if (a == 0)
		{
			std::cout << "math error: division between 0 not supported" << std::endl;
			exit(1);
		}
		result = b / a;
	}
	this->_numbers.push(result);
}
