/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:08:26 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/12 15:05:37 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

void testPoint(float x1, float y1,
			   float x2, float y2,
			   float x3, float y3,
			   float px, float py)
{
	Point a(x1, y1);
	Point b(x2, y2);
	Point c(x3, y3);
	Point p(px, py);

	std::cout << (bsp(a, b, c, p) ? "True" : "False") << std::endl;
}

int main(void)
{
	testPoint(-1, 0, 0, 1, 1, 0, 0, 0.5);
	testPoint(1, 1, 4, 2, 2, 7, 2, 3);
	testPoint(1, 1, 4, 2, 2, 7, 1.5, 5);
	testPoint(1, 1, 4, 2, 2, 7, 2, 7);
	testPoint(1, 1, 4, 2, 2, 7, 2, 6.99);

	return 0;
}
