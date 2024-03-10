/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:55:43 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/10 13:57:52 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	std::cout << "[ScalarConverter] Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter &toCopy)
{
	(void)toCopy;
	std::cout << "[ScalarConverter] Copy constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "[ScalarConverter] Default destructor called" << std::endl;	
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &toEqual)
{
	(void)toEqual;
	return (*this);
}

static int	get_index(std::string str)
{
	char	*endptr;

	if (str == "nanf" || str == "+inff" || str == "-inff")
		return (PSEF);
	if (str == "nan" || str == "+inf" || str == "-inf")
		return (PSED);
	if (str == "inf")
		return (INT_MAX);
	if (str.length() == 1 && (str[0] >= 32 && str[0] <= 126))
		return (CHAR);
	strtol(str.c_str(), &endptr, 10);
	if (endptr[0] == '\0')
		return (INT);
	strtod(str.c_str(), &endptr);
	if (endptr[0] == 'F' || endptr[0] == 'f')
		return (FLT);
	else if (endptr[0] == '\0')
		return (DBL);
	return (0);
}

static bool isround(float nbr)
{
	int icast = static_cast<int>(nbr);
	if (nbr == icast)
		return (true);
	else
		return (false);
}

void	ScalarConverter::convert(const std::string str)
{
	char	c_received;
	int		i_received;
	float	f_received;
	double	d_received;

	switch (get_index(str))
	{
		case CHAR:
			c_received = str[0];
			std::cout << "char: '" << c_received << "'" << std::endl;
			std::cout << "int: " << static_cast<int>(c_received) << std::endl;
			std::cout << "float: " << static_cast<float>(c_received) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(c_received) << ".0" << std::endl;
			break ; 
		case INT:
			i_received = atoi(str.c_str());
			std::cout << "char : ";
			if (isprint(static_cast<char>(i_received)) != 0)
				std::cout << "'" << static_cast<char>(i_received) << "'";
			else
				std::cout << "Non displayable";
			std::cout << std::endl;
			if (atol(str.c_str()) > INT_MAX || atol(str.c_str()) < INT_MIN)
			{
				std::cout << "int: value overflow" << std::endl;
				std::cout << "float: value overflow" << std::endl;
				std::cout << "double: value overflow" << std::endl;
				break ;
			}
			std::cout << "int: " << i_received << std::endl;
			std::cout << "float: " << static_cast<float>(i_received) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(i_received) << ".0" << std::endl;
			break ;
		case FLT:
			f_received = atof(str.c_str());
			std::cout << "char : ";
			if (isround(f_received) && isprint(static_cast<char>(f_received)) != 0)
				std::cout << "'" << static_cast<char>(f_received) << "'";
			else
				std::cout << "Non displayable" << std::endl;
			if (atol(str.c_str()) > INT_MAX || atol(str.c_str()) < INT_MIN)
			{
				std::cout << "int: value overflow" << std::endl;
				std::cout << "float: value overflow" << std::endl;
				std::cout << "double: value overflow" << std::endl;
				break ;
			}
			std::cout << "int: " << static_cast<int>(f_received) << std::endl;
			std::cout << "float: " << f_received  << (isround(f_received) ? ".0f" : "f") << std::endl;
			std::cout << "double: " << static_cast<double>(f_received) << (isround(f_received) ? ".0" : "") << std::endl;
			break ;
		case DBL:
			d_received = atof(str.c_str());
			std::cout << "char : ";
			if (isround(d_received) && isprint(static_cast<char>(d_received)) != 0)
				std::cout << "'" << static_cast<char>(d_received) << "'";
			else
				std::cout << "Non displayable" << std::endl;
			if (atol(str.c_str()) > INT_MAX || atol(str.c_str()) < INT_MIN)
			{
				std::cout << "int: value overflow" << std::endl;
				std::cout << "float: value overflow" << std::endl;
				std::cout << "double: value overflow" << std::endl;
				break ;
			}
			std::cout << "int: " << static_cast<int>(d_received) << std::endl;
			std::cout << "float: " << static_cast<float>(d_received)  << (isround(d_received) ? ".0f" : "f") << std::endl;
			std::cout << "double: " << (d_received) << (isround(d_received) ? ".0" : "") << std::endl;
			break ;
		case PSEF:
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << str << std::endl;
			std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
			break ;
		case PSED:
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << str << "f"<< std::endl;
			std::cout << "double: " << str << std::endl;
			break ;
		default:
			std::cout << "[ERROR] Impossible conversion" << std::endl;
			break ;
	}
}