/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:40:57 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/20 20:46:03 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	const std::string db(av[1]);
	const std::string file(av[2]);
	BitcoinExchange	btcex(db, file);
	return (0);
}
