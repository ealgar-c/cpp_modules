/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:42:09 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/07 16:56:53 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

int	main(void)
{
	FragTrap steve("steve");
	FragTrap peter("peter");
	steve.highFivesGuys();
	peter.highFivesGuys();
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
	steve.beRepaired(100);
	return (0);
}
