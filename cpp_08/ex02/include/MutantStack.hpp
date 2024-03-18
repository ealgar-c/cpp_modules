/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:43:51 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/18 11:15:54 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <exception>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack(void){};
		MutantStack(const MutantStack &toCopy): std::stack<T>(toCopy){};
		MutantStack &operator=(const MutantStack &toEqual){
			std::stack<T>::operator=(toEqual);
			return (*this);
		};
		~MutantStack(){};
		iterator begin(){
			return (this->c.begin());
		};
		iterator end(){
			return (this->c.end());
		};
};