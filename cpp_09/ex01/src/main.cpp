/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:49:30 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/21 18:55:24 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please, insert one argument" << std::endl;
		return 1;
	}
	RPN	rpn(av[1]);
	std::cout << rpn.calculator() << std::endl;
	return 0;
}