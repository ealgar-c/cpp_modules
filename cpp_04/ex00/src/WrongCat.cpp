/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:44:25 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/13 12:55:11 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"


WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "[WRONGCAT] Default Constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat &toCopy)
{
	_type = toCopy.getType();
	std::cout << "[WRONGCAT] Copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[WRONGCAT] Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat &toEqual)
{
	if (this != &toEqual)
	{
		_type = toEqual.getType();
	}
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "miau" << std::endl;
}