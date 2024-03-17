/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:47:54 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/17 19:40:48 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <class T>
void	easyfind(const T &cont, int value)
{
	typename T::const_iterator it;

	for (it = cont.begin(); it != cont.end(); it++){
		if (*it == value){
			std::cout << "value " << value << " found" << std::endl;
			return ;
		}
	}
	throw (VNFExcep());
}