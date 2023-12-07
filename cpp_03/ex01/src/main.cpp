/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:42:09 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/07 14:36:55 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

int	main(void)
{
	ScavTrap steve("steve");
	ScavTrap peter("peter");
	steve.attack("peter");
	peter.takeDamage(20);
	peter.beRepaired(25);
	peter.attack("steve");
	steve.takeDamage(20);
	peter.attack("steve");
	steve.takeDamage(20);
	peter.attack("steve");
	steve.takeDamage(20);
	peter.attack("steve");
	steve.takeDamage(20);
	peter.attack("steve");
	steve.takeDamage(20);
	steve.beRepaired(100);
	steve.guardGate();
	steve.guardGate();
	return (0);
}
