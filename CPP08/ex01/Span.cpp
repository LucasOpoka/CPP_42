/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:27:14 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/23 22:56:03 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"
#include <boost/iterator/function_output_iterator.hpp>
#include <limits>

Span::Span(): _n(0) {}
Span::Span(unsigned int N): _n(N) {}
Span::Span(const Span &o): _n(o._n), _vec(o._vec) {}
Span::~Span() {}

Span &Span::operator = (const Span &original)
{
	if (this != &original)
	{
		this->~Span();
		new(this) Span(original);		
	}
	return *this;
}

void Span::addNumber(int number)
{
	if (_vec.size() >= _n)
		throw (std::runtime_error("This Span can't hold more numbers!"));
	_vec.push_back(number);
}

unsigned int Span::shortestSpan()
{
	if (_vec.size() < 2)
		throw (std::runtime_error("Less than two numbers, shortest span doesn't exist"));
	std::vector<int> sorted = _vec;
	std::sort(sorted.begin(), sorted.end());

	int res = std::numeric_limits<int>::max();
	auto minSpan = boost::make_function_output_iterator
	(
		[&res](int value) 
		{
			static bool first = true;
			if (first)
				first = false;
			else
				res = std::min(std::abs(value), res); 
		}
	);
    std::adjacent_difference(sorted.begin(), sorted.end(), minSpan);
	return res;
}

unsigned int Span::longestSpan()
{
	if (_vec.size() < 2)
		throw (std::runtime_error("Less than two numbers, longest span doesn't exist"));
	return std::abs(*std::max_element(_vec.begin(), _vec.end()) - *std::min_element(_vec.begin(), _vec.end()));
}
