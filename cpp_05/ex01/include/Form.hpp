/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:55:05 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/20 19:55:05 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

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
			Form(const std::string, const int);
		// default constructor
			~Form(void);
		// Equal operator overload
			Form &operator= (const Form &);
		// getters
			std::string	getName(void);
			int 		getRequiredSign(void);
			int			getRequiredExec(void);
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

std::ostream operator<< (std::ostream, const Form &);