/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:09:25 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/10 18:50:42 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"
#include "../include/Data.hpp"

Serializer::Serializer()
{
	std::cout << "[Serializer] Empty constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &toCopy)
{
	(void)toCopy;
	std::cout << "[Serializer] Copy constructor called" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "[Serializer] Default destructor called" << std::endl;
}

Serializer &Serializer::operator=(const Serializer &toEqual)
{
	(void)toEqual;
	return (*this);
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
