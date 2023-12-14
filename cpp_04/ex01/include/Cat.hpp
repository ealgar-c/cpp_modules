/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:39:27 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/14 13:37:21 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP


# include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *_brain;
	public:
	// constructors
		Cat();
		Cat(Cat &);
	// destructor
		~Cat();
	// equal overload
		Cat				&operator=(const Cat &);
	// methods
		virtual void	makeSound(void) const;
		void			shareThoughts(void) const;
		void			thinkSomething(std::string) const;
};

#endif