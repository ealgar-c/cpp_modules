/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:36:46 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/08 13:45:25 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	public:
		//	constructors
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &);
		ShrubberyCreationForm(const std::string);
		//	destructor
		~ShrubberyCreationForm(void);
		//	equal operator overload
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &);
		//	methods
		void	execute(Bureaucrat const & executor) const;
};

#endif