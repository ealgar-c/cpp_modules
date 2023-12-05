/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:42:13 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/05 17:51:08 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	private:
		std::string name;
		int			hit_pts = 10;
		int			energy_pts = 10;
		int			att_dmg = 0;
	public:
		ClapTrap();
		ClapTrap(ClapTrap &);
		~ClapTrap();
		ClapTrap &operator= (const ClapTrap &);
		void	attack(const std::string &name);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
};

#endif