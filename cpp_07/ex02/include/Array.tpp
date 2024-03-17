/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:35:52 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/11 12:27:30 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template<typename T>
Array<T>::Array(void){
	this->_content = NULL;
	this->_size = 0;
}

template<typename T>
Array<T>::Array(unsigned int size)
{
	this->_content = new T[size];
	this->_size = size;
}

template<typename T>
Array<T>::Array(const Array &toCopy)
{
	this->_content = new T[toCopy.size()];
	this->_size = toCopy._size();
	for (int i = 0; i < this->_size; i++)
		this->_content[i] = toCopy._content[i];
}

template<typename T>
Array<T>::~Array()
{
	delete []this->_content;
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array &toEqual)
{
	if (this != &toEqual)
	{
		if (this->_content)
			delete []this->_content;
		this->_content = new T[toEqual.size()];
		this->_size = toEqual.size();
		for (int i = 0; i < this->size(); i++)
			this->_content[i] = toEqual._content[i];
	}
	return (*this);
}

template<typename T>
T	Array<T>::operator[](unsigned int nb) const
{
	try
	{
		if (nb >= this->_size)
			throw(Array<T>::OOBExcept());
		else
			return (this->_content[nb]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (NULL);
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->_size);
}

#endif