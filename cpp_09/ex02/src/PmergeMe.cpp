/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:27:20 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/04/01 11:56:35 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(char **args)
{
	int	val;
	int	i = 0;
	while (args[i])
	{
		val = atoi(args[i]);
		if (std::find(this->_list.begin(), this->_list.end(), val) == this->_list.end() && val >= 0)
		{
			this->_vector.push_back(val);
			this->_list.push_back(val);
		}
		i++;
	}
	this->_arrlen = i;
}

PmergeMe::PmergeMe(const PmergeMe &toCopy)
{
	this->_list = toCopy._list;
	this->_vector = toCopy._vector;
	this->_arrlen = toCopy._arrlen;
}

PmergeMe::~PmergeMe(){}

PmergeMe &PmergeMe::operator=(const PmergeMe &toEqual)
{
	if (this != &toEqual)
	{
		this->_vector = toEqual._vector;
		this->_list = toEqual._list;
		this->_arrlen = toEqual._arrlen;
	}
	return (*this);
}

int	PmergeMe::getArrlen(void) const
{
	return (this->_arrlen);
}

void	PmergeMe::printList(void) const
{
	std::list<int>::const_iterator it = this->_list.begin();
	for (; it != this->_list.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

static void	mergeList(std::list<int>::iterator l_it, std::list<int>::iterator r_it, std::list<int>::iterator m_it)
{
	std::list<int>			l_vec(l_it, m_it);
	std::list<int>			r_vec(m_it, r_it);
	std::list<int>::iterator	it = l_it;
	std::list<int>::iterator	ll_it = l_vec.begin();
	std::list<int>::iterator	rl_it = r_vec.begin();

	while (ll_it != l_vec.end() && rl_it != r_vec.end())
	{
		if (*ll_it <= *rl_it)
		{
			*it = *ll_it;
			ll_it++; 
		}else
		{
			*it = *rl_it;
			rl_it++;
		}
		it++;
	}
	while (ll_it != l_vec.end()){
		*it = *ll_it;
		ll_it++;
		it++;
	}
	while (rl_it != r_vec.end()){
		*it = *rl_it;
		rl_it++;
		it++;
	}
}

static void	recursiveListSort(std::list<int>::iterator l_it, std::list<int>::iterator r_it)
{
	if (std::distance(l_it, r_it) > 1){
		std::list<int>::iterator m_it = l_it;
		std::advance(m_it, std::distance(l_it, r_it) / 2);
		recursiveListSort(l_it, m_it);
		recursiveListSort(m_it, r_it);
		mergeList(l_it, r_it, m_it);
	}
}

void	PmergeMe::sortList(void)
{
	recursiveListSort(this->_list.begin(), this->_list.end());
}

static void	mergeVector(std::vector<int>::iterator l_it, std::vector<int>::iterator r_it, std::vector<int>::iterator m_it)
{
	std::vector<int>			l_vec(l_it, m_it);
	std::vector<int>			r_vec(m_it, r_it);
	std::vector<int>::iterator	it = l_it;
	std::vector<int>::iterator	lv_it = l_vec.begin();
	std::vector<int>::iterator	rv_it = r_vec.begin();

	while (lv_it != l_vec.end() && rv_it != r_vec.end())
	{
		if (*lv_it <= *rv_it)
		{
			*it = *lv_it;
			lv_it++; 
		}else
		{
			*it = *rv_it;
			rv_it++;
		}
		it++;
	}
	while (lv_it != l_vec.end()){
		*it = *lv_it;
		lv_it++;
		it++;
	}
	while (rv_it != r_vec.end()){
		*it = *rv_it;
		rv_it++;
		it++;
	}
}

static void	recursiveVectorSort(std::vector<int>::iterator l_it, std::vector<int>::iterator r_it)
{
	if (std::distance(l_it, r_it) > 1){
		std::vector<int>::iterator m_it = l_it;
		std::advance(m_it, std::distance(l_it, r_it) / 2);
		recursiveVectorSort(l_it, m_it);
		recursiveVectorSort(m_it, r_it);
		mergeVector(l_it, r_it, m_it);
	}
}

void	PmergeMe::sortVector(void)
{
	recursiveVectorSort(this->_vector.begin(), this->_vector.end());
}