/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:10:38 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/23 16:55:55 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "easyfind.hpp"
#include <iostream>

int main(void)
{
	std::vector<int> intVct = {1, 3, 7, 4, 9, 42, 55, 138, 17, 10};
	std::vector<int>::iterator itr;
	int elem = 42;

	for (int i: intVct)
		std::cout << i << " ";
	std::cout << std::endl;

	try
	{
		itr = easyfind(intVct, elem);
		std::cout << "Element " << elem << " was found at index: ";
		std::cout << std::distance(intVct.begin(), itr) << std::endl;
	}
	catch (std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
