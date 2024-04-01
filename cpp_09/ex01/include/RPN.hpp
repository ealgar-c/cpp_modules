/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:30:01 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/04/01 11:49:13 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stack>
# include <string>
# include <cstdlib>

class RPN
{
	private:
		std::stack<int> _numbers;
	public:
		RPN();
		RPN(const std::string &);
		RPN(const RPN &);
		~RPN();
		RPN &operator=(const RPN &);
		void	calculator(char c);
};
