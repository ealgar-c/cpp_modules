/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:43:36 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/08 14:51:00 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	public:
		//	constructors
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &);
		RobotomyRequestForm(const std::string);
		//	destructor
		~RobotomyRequestForm(void);
		//	equal operator overload
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &);
		//	methods
		void	execute(Bureaucrat const & executor) const;
};

#endif