/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:28:41 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/20 15:40:47 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "whatever.hpp"
#include <iostream>

int	main(void)
{
	int i1 = 1, i2 = 2;
	char c1 = 'a', c2 = 'b';
	float f1 = 3.14f, f2 = 2.718f;

	std::cout << "i1 = " << i1 << ", i2 = " << i2 << std::endl;
	swap<int>(i1, i2);
	std::cout << "After swap i1 = " << i1 << ", i2 = " << i2 << std::endl;

	std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
	swap<char>(c1, c2);
	std::cout << "After swap c1 = " << c1 << ", c2 = " << c2 << std::endl;
	
	std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;
	swap<float>(f1, f2);
	std::cout << "After swap f1 = " << f1 << ", f2 = " << f2 << std::endl;

	std::cout << "max i = " << max<int>(i1, i2) << std::endl;
	std::cout << "max c = " << max<char>(c1, c2) << std::endl;
	std::cout << "max f = " << max<float>(f1, f2) << std::endl;
	return (0);
}
