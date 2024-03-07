/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:55:05 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/07 18:44:04 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Form.hpp"

class Bureaucrat;

class AForm
{
	protected:
		const std::string	_name;
		bool				_signed;
		const int			_requiredSign;
		const int			_requiredExec;
	public:
		// default constructor
			AForm(void);
		// Copy constructor
			AForm(const Form &);
		// default constructor
			AForm(const std::string, const int, const int);
		// default constructor
			~AForm(void);
		// Equal operator overload
			AForm &operator= (const AForm &);
		// getters
			const std::string	getName(void) const;
			int 				getRequiredSign(void) const;
			int					getRequiredExec(void) const;
			bool				getSigned(void) const;
			virtual void		execute(Bureaucrat const & executor) const = 0;
		//	methods
		void	beSigned(Bureaucrat &);
		// exceptions
			class GradeTooHighException: public std::exception{
				public:
					virtual const char *what() const throw();
			};
			class GradeTooLowException: public std::exception{
				public:
					virtual const char *what() const throw();
			};

};

std::ostream &operator<< (std::ostream &, const AForm &);

#endif