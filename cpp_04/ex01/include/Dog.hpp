/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:32:17 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/13 16:13:18 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *_brain;
	public:
	// constructors
		Dog();
		Dog(Dog &);
	// destructor
		~Dog();
	// equal overload
		Dog				&operator=(const Dog &);
	// methods
		virtual void	makeSound(void) const;
		void			shareThoughts(void) const;
		void			thinkSomething(std::string) const;
};

#endif