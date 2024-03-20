/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:06:13 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/19 16:07:15 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &a, T &b)
{
	T	save;

	save = a;
	a = b;
	b = save;
}

template<typename T>
T	&min(T &a, T &b)
{
	return (a < b ? a : b);
}

template<typename T>
T	&max(T &a, T &b)
{
	return (a > b ? a : b);
}

#endif