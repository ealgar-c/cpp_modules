/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:44:25 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/13 12:42:43 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"


Cat::Cat()
{
	_type = "Cat";
	std::cout << "[CAT] Default Constructor called" << std::endl;
}

Cat::Cat(Cat &toCopy)
{
	_type = toCopy.getType();
	std::cout << "[CAT] Copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[CAT] Destructor called" << std::endl;
}

Cat &Cat::operator=(Cat &toEqual)
{
	if (this != &toEqual)
	{
		_type = toEqual.getType();
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "miau" << std::endl;
}
