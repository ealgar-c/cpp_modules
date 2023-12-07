/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:42:09 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/07 13:00:15 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int	main(void)
{
	ClapTrap steve("steve");
	ClapTrap peter("peter");

	steve.attack("peter");
	steve.attack("peter");
	steve.attack("peter");
	steve.attack("peter");
	steve.attack("peter");
	steve.attack("peter");
	steve.attack("peter");
	steve.attack("peter");
	steve.attack("peter");
	steve.attack("peter");
	steve.attack("peter");
	peter.takeDamage(9);
	peter.beRepaired(9);
	peter.takeDamage(10);
	peter.beRepaired(9);
	return (0);
}
