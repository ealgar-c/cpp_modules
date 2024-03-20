/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:26:24 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/19 17:15:30 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

int main(void)
{
	int 	numeric_array[5] = {1, 3, 5, 7, 9};
	char	char_array[5] = {'p', 'i', 'p', 'o', '!'};

	iter(numeric_array, 5, printer<int>);
	std::cout << std::endl;
	iter(char_array, 5, printer<char>);
}