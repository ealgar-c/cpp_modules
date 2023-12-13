/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:57:47 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/13 12:42:13 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
	// constructors
		Animal();
		Animal(Animal &);
	// destructor
		virtual ~Animal();
	// equal overload
		Animal &operator=(Animal &);
	// getter
		std::string		getType(void) const;
	// methods
		virtual void	makeSound(void) const;
};

#endif