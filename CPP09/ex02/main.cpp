/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:51:02 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/26 22:12:02 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Usage: ./PmergeMe n1 n2 n3 [...]" << std::endl;
		return 1;
	}
	try
	{
		PmergeMe PM(av + 1);
		std::cout << "Before: ";
		PM.printVector();
		clock_t start = clock();
		PM.sortVector();
		double diff1 = static_cast<double>(clock() - start) / CLOCKS_PER_SEC * 1000000.0;
		start = clock();
		PM.sortDeque();	
		double diff2 = static_cast<double>(clock() - start) / CLOCKS_PER_SEC * 1000000.0;
		std::cout << "After: ";
		PM.printVector();
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << std::fixed << diff1 << std::endl; 
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << std::fixed << diff2 << std::endl; 
	}
	catch(const std::exception &e) {std::cout << e.what() << std::endl;}
    return 0;
}
