/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:03:00 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/11/28 11:40:12 by ealgar-c         ###   ########.fr       */
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

	void (Harl::*f_ptrs[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i <= 5; i++)
	{
		if (!level.compare(levels[i]))
		{
			(this->*f_ptrs[i])();
			break ;
		}
		if (i == 5)
			std::cout << "[INVALID MESSAGE]" << std::endl << "Harl cant complain like that." << std::endl;
	}
	
	
}