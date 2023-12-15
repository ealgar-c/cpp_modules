/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:21:37 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/15 12:03:54 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "Interfaces.hpp"

class Cure: public AMateria
{
	public:
		// empty constructor
		Cure(void);
		// copy constructor
		Cure(const Cure &);
		// destructor
		~Cure(void);
		// equal operator overload
		Cure &operator=(const Cure &);
		// methods
		virtual Cure		*clone(void) const;
		virtual void		use(ICharacter &target);
};

#endif