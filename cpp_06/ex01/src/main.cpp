/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:50:49 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/10 19:04:35 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"
#include "../include/Data.hpp"

int	main(void)
{
	Data		*original = new Data("pipo", 21);
	uintptr_t	orig_raw = Serializer::serialize(original);
	Data		*final = Serializer::deserialize(orig_raw);

	std::cout << *original << *final;
	return (0);
}
