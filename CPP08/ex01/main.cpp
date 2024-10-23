/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:51:33 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/23 22:58:10 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(-450);
	sp.addNumber(-500);
	sp.addNumber(-1000);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	sp.addNumber(452);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	sp.addNumber(-1001);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
