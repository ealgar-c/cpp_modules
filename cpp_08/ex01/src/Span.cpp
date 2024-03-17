/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:16:27 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/17 22:08:48 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span(unsigned int N)
{
	this->_N = N;
}

Span::Span(const Span &toCopy)
{
	this->_N = toCopy._N;
	this->_nbrs = toCopy._nbrs;
}

Span::~Span(){}

Span &Span::operator=(const Span &toEqual)
{
	if (this != &toEqual)
	{
		this->_N = toEqual._N;
		this->_nbrs = toEqual._nbrs;
	}
	return (*this);
}

void	Span::addNumber(const int newnb)
{
	try
	{
		if (this->_nbrs.size() == this->_N)
			throw (Span::OOBExcp());
		this->_nbrs.insert(this->_nbrs.end(), newnb);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	Span::printnbrs(void) const
{
	std::list<int>::const_iterator list_iter;
	int i = 1;

	for (list_iter = this->_nbrs.begin(); list_iter != this->_nbrs.end(); list_iter++)
		std::cout << "pos: " << i++ << " value: " << *list_iter << std::endl;
}

void	Span::fillNumbers(void)
{
	std::srand(time(NULL));

	try
	{
		if (this->_nbrs.size() >= this->_N)
			throw (Span::OOBExcp());
		while (this->_nbrs.size() < this->_N)
			this->_nbrs.insert(this->_nbrs.end(), std::rand());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

unsigned int	Span::shortestSpan(void) const
{
	unsigned int	tmp_res;
	unsigned int	save;
	std::list<int>	sorted_list(this->_nbrs);

	try
	{
		if (this->_nbrs.size() < 2)
			throw (Span::NEIExcp());
		sorted_list.sort();
		for (std::list<int>::const_iterator list_iter = sorted_list.begin(); list_iter != sorted_list.end(); list_iter++)
		{
			if (list_iter == sorted_list.begin())
			{
				save = *list_iter;
				list_iter++;
				tmp_res = *list_iter - save;
				save = *list_iter;
				continue ;
			}
			if (tmp_res >= (*list_iter - save))
				tmp_res = (*list_iter - save);
			save = *list_iter;
		}
		return (tmp_res);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

unsigned int	Span::longestSpan(void) const
{
	std::list<int>::const_iterator	min_el;
	std::list<int>::const_iterator	max_el;

	try
	{
		if (this->_nbrs.size() < 2)
			throw (Span::NEIExcp());
		min_el = std::min_element(this->_nbrs.begin(), this->_nbrs.end());		
		max_el = std::max_element(this->_nbrs.begin(), this->_nbrs.end());		
		return (*max_el - *min_el);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);	
}
