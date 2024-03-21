/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:30:01 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/21 18:55:26 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<stack>
#include<string>
class RPN
{
	private:
		std::stack<int> _numbers;
		std::stack<char> _signs;
	public:
		RPN(const std::string &);
		RPN(const RPN &);
		~RPN();
		RPN &operator=(const RPN &);
		int	calculator();
};