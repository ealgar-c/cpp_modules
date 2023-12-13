/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:32:17 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/13 12:43:36 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
	public:
	// constructors
		Dog();
		Dog(Dog &);
	// destructor
		~Dog();
	// equal overload
		Dog				&operator=(Dog &);
	// methods
		virtual void	makeSound(void) const;
};

#endif