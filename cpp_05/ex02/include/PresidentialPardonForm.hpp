/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 00:15:52 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/09 00:16:47 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	public:
		//	constructors
		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm &);
		PresidentialPardonForm(const std::string);
		//	destructor
		~PresidentialPardonForm(void);
		//	equal operator overload
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &);
		//	methods
		void	execute(Bureaucrat const & executor) const;
};

#endif