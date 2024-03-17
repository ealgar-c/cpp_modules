/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:43:25 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/11 12:29:36 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "../include/Array.hpp"
#include "../include/Array.tpp"
#include <iostream>
#include <string>

int main(void)
{
	{	
		Array<std::string> str_arr(5);
		std::cout << "test0" << std::endl;
		str_arr[0] = "Hola";
		std::cout << "test1" << std::endl;
		str_arr[1] = "que";
		std::cout << "test2" << std::endl;
		str_arr[2] = "tal";
		std::cout << "test3" << std::endl;
		str_arr[4] = "contigo";
		std::cout << "test4" << std::endl;
		str_arr[5] = "pipo!";
		std::cout << "test5" << std::endl;
		std::cout << str_arr[2] << std::endl;
		std::cout << "el tamaño del Array es: " << str_arr.size() << std::endl;
		std::cout << str_arr[6];
	}
	{
		Array<int> int_arr(5);
		int_arr[0] = 10;
		int_arr[1] = 27;
		int_arr[2] = 33;
		int_arr[3] = 42;
		int_arr[4] = 68;
		std::cout << int_arr[2] << std::endl;
		std::cout << "el tamaño del Array es: " << int_arr.size() << std::endl;
	}
	return (0);
} */

#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}