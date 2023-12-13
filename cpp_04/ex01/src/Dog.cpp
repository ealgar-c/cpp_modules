/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:12:21 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/13 18:29:41 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "[DOG] Default Constructor called" << std::endl;
}

Dog::Dog(Dog &toCopy)
{
	_type = toCopy.getType();
	this->_brain = toCopy._brain;
	std::cout << "[DOG] Copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete (this->_brain);
	std::cout << "[DOG] Destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &toEqual)
{
	if (this != &toEqual)
	{
		_type = toEqual.getType();
		std::cout << "test" << std::endl;
		*this->_brain = *toEqual._brain;
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "guau guau" << std::endl;
}

void	Dog::shareThoughts(void) const
{
	std::cout << "idea 1: " << this->_brain->getIdea(0) << std::endl;
	std::cout << "idea 2: " << this->_brain->getIdea(1) << std::endl;
	std::cout << "idea 3: " << this->_brain->getIdea(2) << std::endl;
}

void	Dog::thinkSomething(std::string thought) const
{
	this->_brain->setIdea(thought);
}