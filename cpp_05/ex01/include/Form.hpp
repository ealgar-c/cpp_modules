/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:55:05 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/07 18:18:12 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Form.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_requiredSign;
		const int			_requiredExec;
	public:
		// default constructor
			Form(void);
		// Copy constructor
			Form(const Form &);
		// default constructor
			Form(const std::string, const int, const int);
		// default constructor
			~Form(void);
		// Equal operator overload
			Form &operator= (const Form &);
		// getters
			const std::string	getName(void) const;
			int 				getRequiredSign(void) const;
			int					getRequiredExec(void) const;
			bool				getSigned(void) const;
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

std::ostream &operator<< (std::ostream &, const Form &);

#endif