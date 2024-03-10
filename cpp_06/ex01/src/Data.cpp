/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:43:26 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/10 18:58:59 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Data.hpp"

Data::Data()
{
	this->_name = "Default";
	this->_age = 18;
	std::cout << "[Data] Empty constructor called" << std::endl;
}

Data::Data(const std::string name, const int age)
{
	this->_name = name;
	this->_age = age;
	std::cout << "[Data] Default constructor called" << std::endl;
}

Data::Data(const Data &toCopy)
{
	this->_name = toCopy.getName();
	this->_age = toCopy.getAge();
	std::cout << "[Data] Copy constructor called" << std::endl;
}

Data::~Data()
{
	std::cout << "[Data] Default destructor called" << std::endl;
}

std::string	Data::getName() const
{
	return (this->_name);
}

int	Data::getAge() const
{
	return (this->_age);
}

Data	&Data::operator=(const Data &toEqual)
{
	if (this != &toEqual)
	{
		this->_name = toEqual.getName();
		this->_age = toEqual.getAge();
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &outs, const Data &obj)
{
	outs << "name: " << obj.getName() << ", age: " << obj.getAge() << "." <<std::endl;
	return (outs);
}
