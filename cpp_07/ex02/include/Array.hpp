/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:35:56 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/17 15:36:54 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <exception>
# include <iostream>

template<typename T>
class Array
{
	private:
		T				*_content;
		unsigned int	_size;
	public:
		//	constructors
			Array();
			Array(unsigned int);
			Array(const Array &);
		//	destructor
			~Array();
		//	operators overloads
			Array	&operator=(const Array &);
			T		&operator[](unsigned int nb);
		//	methods
			unsigned int	size(void) const;
		//	exceptions
			class OOBExcept : public std::exception {
				public:
					virtual const char* what() const throw() { return "[ERROR] Index is out of bounds";}
			};
};

#include "Array.tpp"