/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:43:25 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/10 21:21:51 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"
#include "../include/Array.tpp"
#include <iostream>
#include <string>

int main(void)
{
	{	
		Array<std::string> str_arr(5);
		str_arr[0] = "Hola";
		str_arr[1] = "que";
		str_arr[2] = "tal";
		str_arr[4] = "contigo";
		str_arr[5] = "pipo!";
		std::cout << str_arr[2] << std::endl;
		std::cout << "el tamaño del Array es: " << str_arr.size() << std::endl;
		std::cout << str_arr[6];
	}
	/*{
		Array<int> int_arr(5);
		int_arr[0] = 10;
		int_arr[1] = 27;
		int_arr[2] = 33;
		int_arr[3] = 42;
		int_arr[4] = 68;
		std::cout << int_arr[2] << std::endl;
		std::cout << "el tamaño del Array es: " << int_arr.size() << std::endl;
	}*/
	return (0);
}