/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:02:03 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/07 14:47:09 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		bool gateKeeper;
	public:
		ScavTrap();
		ScavTrap(const std::string &);
		ScavTrap(ScavTrap &);
		~ScavTrap();
		void	attack(const std::string &);
		void	guardGate(void);
};

#endif