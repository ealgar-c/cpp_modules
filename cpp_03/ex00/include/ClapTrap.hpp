/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:42:13 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/07 12:56:33 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	private:
		std::string		name;
		unsigned int	hit_pts;
		unsigned int	energy_pts;
		unsigned int	att_dmg;
	public:
		ClapTrap();
		ClapTrap(const std::string &);
		ClapTrap(ClapTrap &);
		~ClapTrap();
		ClapTrap &operator= (const ClapTrap &);
		void	attack(const std::string &);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
		
};

#endif