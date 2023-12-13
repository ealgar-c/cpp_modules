/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:04:53 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/13 12:55:32 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "Generic WrongAnimal";
	std::cout << "[WRONGANIMAL] Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &toCopy)
{
	_type = toCopy.getType();
	std::cout << "[WRONGANIMAL] Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WRONGANIMAL] Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &toEqual)
{
	if (this != &toEqual)
	{
		_type = toEqual.getType();
	}
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Generic WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}
