/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:51:33 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/24 18:07:04 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"

int main()
{
	std::cout << "----- Base tests -----" << std::endl;
	Span sp = Span(5);

	sp.addNumber(11);
	sp.addNumber(42);
	sp.addNumber(37);
	sp.print();

	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span " << sp.longestSpan() << std::endl << std::endl;

	sp.addNumber(4);
	sp.print();

	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span " << sp.longestSpan() << std::endl << std::endl;
	
	sp.addNumber(1);
	sp.print();

	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span " << sp.longestSpan() << std::endl << std::endl;

	std::cout << "----- Additional tests for randomFillRange-----" << std::endl;
	
	Span sp2 = Span(10000);
	
	std::cout << "sp2 size is: " << sp2.size() << std::endl;
	sp2.resize(10);
	std::cout << "sp2 size is: " << sp2.size() << std::endl;
	std::cout << std::endl;
	
	sp2.randomFillRange(std::next(sp2.begin(), 0), sp2.end());
	sp2.print();

	std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest span " << sp2.longestSpan() << std::endl;

	return 0;
}
