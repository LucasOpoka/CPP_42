/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:04:47 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/20 18:18:32 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "iter.hpp"
#include <string>

int main(void)
{
	int arr1[5] = {1, 2, 3, 4, 5};
	char arr2[5] = {'a', 'B', 'c', 'D', 'e'};
	std::string arr3[6] = {"Hope", "this", "passes", "the", "first", "time"};
	float arr4[5] = {3.14f, 2.78f, 11.32f, 42.42f, 6.77f};
	bool arr5[2] = {true, false};

	iter<int>(arr1, 5, &func);
	std::cout << std::endl;

	iter<char>(arr2, 5, &func);
	std::cout << std::endl;

	iter<std::string>(arr3, 6, &func);
	std::cout << std::endl;

	iter<float>(arr4, 2, &func);
	std::cout << std::endl;

	iter<bool>(arr5, 2, &func);

	return 0;
}
