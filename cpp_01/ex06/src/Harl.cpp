/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:49:33 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/11/28 12:09:40 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout << "[DEBUG MESSAGE]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "[INFO MESSAGE]" << std::endl << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[WARNING MESSAGE]" << std::endl << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl;	
}

void	Harl::error()
{
	std::cout << "[ERROR MESSAGE]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void	Harl::complain(std::string level)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = -1;
	while (++i <= 3)
	{
		if (levels[i].compare(level) == 0)
			break;
	}
	
	switch (i)
	{
		case 0:
			this->debug();
			this->info();
			this->warning();
			this->error();
			break;
		case 1:
			this->info();
			this->warning();
			this->error();
			break;
		case 2:
			this->warning();
			this->error();
			break;
		case 3:
			this->error();
			break;
		
		default:
			std::cout << "THE GIVEN LEVEL IS NOT HARL MODE" << std::endl;
			break;
	}
}