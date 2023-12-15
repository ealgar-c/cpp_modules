/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:46:49 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/15 11:06:00 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "Interfaces.hpp"

class Ice: public AMateria
{
	public:
		// empty constructor
		Ice(void);
		// copy constructor
		Ice(const Ice &);
		// destructor
		~Ice(void);
		// equal operator overload
		Ice &operator=(const Ice &);
		// methods
		virtual Ice			*clone(void) const;
		virtual void		use(ICharacter &target);
};

#endif