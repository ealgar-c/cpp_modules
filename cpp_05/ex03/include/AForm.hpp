/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:55:05 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/08 14:10:14 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>

class Bureaucrat;

class AForm
{
	protected:
		const std::string	_name;
		const std::string	_target;
		bool				_signed;
		const int			_requiredSign;
		const int			_requiredExec;
	public:
		// default constructor
			AForm(void);
		// Copy constructor
			AForm(const AForm &);
		// default constructor
			AForm(const std::string, const std::string, const int, const int);
		// default constructor
			~AForm(void);
		// Equal operator overload
			AForm &operator= (const AForm &);
		// getters
			const std::string	getName(void) const;
			int 				getRequiredSign(void) const;
			int					getRequiredExec(void) const;
			bool				getSigned(void) const;
			const std::string	getTarget(void) const;
		//	methods
			void			beSigned(Bureaucrat &);
			virtual void	execute(Bureaucrat const & executor) const = 0;
		// exceptions
			class GradeTooHighException: public std::exception{
				public:
					virtual const char *what() const throw();
			};
			class GradeTooLowException: public std::exception{
				public:
					virtual const char *what() const throw();
			};
			class FormNotSigned: public std::exception{
				public:
					virtual const char *what() const throw();
			};
};

std::ostream &operator<< (std::ostream &, const AForm &);

#endif