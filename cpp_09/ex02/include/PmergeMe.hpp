/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:27:27 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/24 17:29:34 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <vector>
# include <list>
#include <algorithm>
# include <sys/time.h>

class PmergeMe
{
	private:
		std::list<int>		_list;
		std::vector<int>	_vector;
		int					_arrlen;
	public:
		PmergeMe();
		PmergeMe(char **);
		PmergeMe(const PmergeMe &);
		~PmergeMe();
		PmergeMe &operator=(const PmergeMe &);
		int		getArrlen(void) const;
		void	printList(void) const;
		void	sortList(void);
		void	sortVector(void);
};