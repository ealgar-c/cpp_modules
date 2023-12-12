/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:40:21 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/12 13:38:45 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"

	class DiamondTrap: public ScavTrap, public FragTrap
	{
		private:
			std::string name;
		public:
			DiamondTrap();
			DiamondTrap(DiamondTrap &);
			DiamondTrap(const std::string &);
			~DiamondTrap();
			void	whoAmI(void);
			void	showValues(void);
	};
#endif