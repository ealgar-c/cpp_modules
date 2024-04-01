/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:40:57 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/04/01 11:09:17 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "please insert an input file" << std::endl;
		return (1);
	}
	const std::string file(av[1]);
	BitcoinExchange	btcex("data.csv", file);
	return (0);
}
