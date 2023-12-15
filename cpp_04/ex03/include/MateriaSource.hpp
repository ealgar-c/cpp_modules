/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:22:05 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/15 14:06:48 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "Interfaces.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*_learnedMaterias[4];
		int			_matLearned;
	public:
	// empty constructor
		MateriaSource(void);
	// copy constructor
		MateriaSource(const MateriaSource &);
	// Destructor
		~MateriaSource(void);
	// equal operator overolad
		MateriaSource &operator= (const MateriaSource &);
	// inherited methods
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const &type);
};


#endif