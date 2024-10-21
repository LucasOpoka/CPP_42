/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:11:46 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/21 19:59:47 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Array.hpp"
#include <iostream>
#define SIZE 42

int main(void)
{
    Array<int> class_array(SIZE);
    int *normal_array = new int[SIZE];

    srand(time(0));	
	for (int i = 0; i < SIZE; i++)
        class_array[i] = normal_array[i] = rand() % 42;
    
    Array<int> class_arr_eq = class_array;
    Array<int> class_arr_cp(class_arr_eq);
    
    for (int i = 0; i < SIZE; i++)
        (normal_array[i] == class_array[i] ? std::cout << class_array[i] : std::cout << "Values are not equal!") << std::endl;

    try {std::cout << class_array[-42];}
    catch(const std::exception& e) {std::cerr << e.what() << std::endl;}
    
	try {std::cout << class_array[42];}
    catch(const std::exception& e) {std::cerr << e.what() << std::endl;}

    for (int i = 0; i < SIZE; i++)
		class_array[i] = rand();
    
	delete [] normal_array;

    return 0;
}
