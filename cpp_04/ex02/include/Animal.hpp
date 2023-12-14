/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:57:47 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/14 14:09:46 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string.h>

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
		virtual void	makeSound(void) const = 0;
};

#endif