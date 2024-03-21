/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:35:17 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/21 19:18:23 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

static int	isoperand(char c)
{
	if (c == '+' || c == '-' || c == '/' || c == '*')
			return 1;
	return 0;
}

static void	parsingError(char c)
{
	std::cout << "token not recognized: " << c << std::endl;
	exit(1);
}

RPN::RPN(const std::string &str)
{
	for(int i = str.size() - 1; i >= 0; i--)
	{
		if (isdigit(str[i]) != 0)
			this->_numbers.push(atoi(&str[i]));
		else if (isoperand(str[i]) != 0)
			this->_signs.push(str[i]);
		else if (isspace(str[i]) == 0)
			parsingError(str[i]);
	}
}

RPN::RPN(const RPN &toCopy)
{
	this->_numbers = toCopy._numbers;
	this->_signs = toCopy._signs;
}

RPN::~RPN()
{
	
}

RPN &RPN::operator=(const RPN &toEqual)
{
	if (this != &toEqual)
	{
		this->_numbers = toEqual._numbers;
		this->_signs = toEqual._signs;
	}
	return (*this);
}

int	RPN::calculator(void)
{
	int	a = this->_numbers.top();
	this->_numbers.pop();
	int	b = this->_numbers.top();
	this->_numbers.pop();
	while(this->_numbers.size() != 0)
	{
		if (this->_signs.size() != 0)
		{
			switch (this->_signs.top())
			{
			case '+':
				a += b;
				break;
			case '-':
				a -= b;
				break;
			case '*':
				a *= b;
				break;
			case '/':
				a /= b;
				break;
			
			default:
				std::cout << "Unknown operation found" << std::endl;
				break;
			}
		}
		else
			a *= b;
		b = this->_numbers.top();
		if (this->_numbers.size() != 0)
			this->_numbers.pop();
		if (this->_signs.size() != 0)
			this->_signs.pop();
	}
	if (this->_signs.size() != 0)
	{
		switch (this->_signs.top())
		{
		case '+':
			a += b;
			break;
		case '-':
			a -= b;
			break;
		case '*':
			a *= b;
			break;
		case '/':
			a /= b;
			break;
		
		default:
			std::cout << "Unknown operation found" << std::endl;
			break;
		}
	}
	else
		a *= b;
	return a;
}
