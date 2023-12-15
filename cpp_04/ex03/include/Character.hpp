/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:29:13 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/15 12:09:42 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "Interfaces.hpp"

class Character: public ICharacter
{
	private:
		AMateria	*_inventory[4];
		std::string	_name;
		int			_matEquiped;
	public:
		// empty constructor
		Character(void);
		// copy constructor
		Character(const Character &);
		// name constructor
		Character(const std::string);
		// destructor
		~Character(void);
		// equal operator overload
		Character &operator=(const Character &);
		// inherited methods
		virtual std::string const &getName(void) const;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);
		// methods
		void	saveToUneq(AMateria *);
		static int _uneqSize;
		static AMateria **_uneqMaterias;
};

#endif