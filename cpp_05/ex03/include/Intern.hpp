/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:55:01 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/11 09:31:50 by ealgar-c         ###   ########.fr       */
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