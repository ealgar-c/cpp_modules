/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 00:30:38 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/09 00:50:59 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class AForm;

class	Intern
{
	public:
		//	constructors
			Intern(void);
			Intern(Intern &);
		//	destructor
			~Intern(void);
		//	Equal operator overload
			Intern	&operator=(const Intern &);
		// methods
			AForm	*makeForm(const std::string, const std::string) const;
};

#endif