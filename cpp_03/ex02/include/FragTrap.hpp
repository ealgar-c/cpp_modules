/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:40:21 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/07 16:55:46 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string &);
		FragTrap(FragTrap &);
		~FragTrap();
		void	highFivesGuys(void);
};

#endif