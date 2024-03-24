/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:27:23 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/22 15:57:47 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

int	main(int ac, char **av)
{
	struct timeval	start, end;

	PmergeMe	pmergeme(av);
	std::cout << "Before: ";
	pmergeme.printList();
	gettimeofday(&start, NULL);
	pmergeme.sortList();
	gettimeofday(&end, NULL);
	long timerList = end.tv_usec - start.tv_usec;
	gettimeofday(&start, NULL);
	pmergeme.sortVector();
	gettimeofday(&end, NULL);
	long timerVector = end.tv_usec - start.tv_usec;
	std::cout << "After: ";
	pmergeme.printList();
	std::cout << "time to process a range of "<< pmergeme.getArrlen() << " elements with std::list : " << timerList << " us." << std::endl;
	std::cout << "time to process a range of "<< pmergeme.getArrlen() << " elements with std::list : " << timerVector << " us." << std::endl;
	return 0;
}
