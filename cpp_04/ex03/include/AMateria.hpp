/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:22:32 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/15 13:34:40 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "Interfaces.hpp"

class AMateria
{
	protected:
		std::string _type;
	public:
		// empty constructor
			AMateria(void);
		// copy constructor
			AMateria(const AMateria &);
		// type constructor
			AMateria(std::string const &type);
		// destructor
			virtual	~AMateria(void);
		// equal operator overload
			AMateria &operator=(const AMateria &);
		// getter
			std::string const	&getType(void) const; //Returns the materia type
		// methods
			virtual AMateria	*clone(void) const = 0;
			virtual void		use(ICharacter &target);
};

#endif