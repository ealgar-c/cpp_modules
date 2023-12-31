/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:42:09 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/12 13:42:45 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap steve("steve");
	DiamondTrap peter("peter");

	steve.showValues();
	steve.attack("peter");
	peter.takeDamage(30);
	peter.beRepaired(25);
	peter.attack("steve");
	steve.takeDamage(30);
	peter.attack("steve");
	steve.takeDamage(30);
	peter.attack("steve");
	steve.takeDamage(30);
	peter.attack("steve");
	steve.takeDamage(30);
	peter.attack("steve");
	steve.takeDamage(30);
	steve.beRepaired(100);
	steve.whoAmI();
	peter.whoAmI();
	return (0);
}
