/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:11:51 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/11 10:58:56 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;
	class Bureaucrat
	{
		private:
			const std::string	_name;
			int					_grade;
		public:
			// constructors
				Bureaucrat(void);
				Bureaucrat(const std::string &, const int);
				Bureaucrat(const Bureaucrat &);
			// destructor
				~Bureaucrat(void);
			// equal operator overload
				Bureaucrat &operator= (const Bureaucrat &);
			// getters
				std::string	getName(void) const;
				int			getGrade(void) const;
			// methods
				void	incrementGrade(void);
				void	decrementGrade(void);
				void	signForm(Form &);
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
	std::ostream	&operator<<(std::ostream &, const Bureaucrat &);
#endif