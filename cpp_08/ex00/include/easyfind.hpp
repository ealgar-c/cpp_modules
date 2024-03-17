/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:47:57 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/17 19:35:02 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <vector>
# include <exception>
# include <iostream>
# include <string>

class VNFExcep: public std::exception{
	public:
		const char *what() const throw(){
			return ("value not found");
		}
};

template <class T>
void	easyfind(const T &cont, int value);

# include "easyfind.tpp"