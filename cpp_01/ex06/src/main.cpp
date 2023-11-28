/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:49:36 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/11/28 12:11:17 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cout << "[ Probably complaining about insignificant problems ]\n", 1);
	Harl harl;
	harl.complain(argv[1]);
}