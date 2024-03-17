/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:47:52 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/17 19:39:13 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"

int main(void)
{
	std::vector<int> v_cont;

	v_cont.push_back(2);
	v_cont.push_back(5);
	v_cont.push_back(1);
	try
	{
		easyfind(v_cont, 5);
		easyfind(v_cont, 1);
		easyfind(v_cont, 6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
