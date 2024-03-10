/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:23:06 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/10 20:27:49 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

template<typename T, typename fn>
void	iter(T arr, int len, fn func)
{
	for (int i = 0; i < len; i++)
		func(arr[i]);
}

template<typename T>
void	printer(T val)
{
	std::cout << val;
}