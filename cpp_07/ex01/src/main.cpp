/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:26:24 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/10 20:31:03 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

int main(void)
{
	int	len = 5;
	int 	numeric_array[len] = {1, 3, 5, 7, 9};
	char	char_array[len] = {'p', 'i', 'p', 'o', '!'};

	iter(numeric_array, len, printer<int>);
	std::cout << std::endl;
	iter(char_array, len, printer<char>);
}