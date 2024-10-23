/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:19:06 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/23 21:55:40 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>

class Span
{
	private:
			unsigned int _n;
			std::vector<int> _vec;
	public:
			Span();
			Span(unsigned int N);
			Span(const Span &original);
			~Span();

			Span &operator = (const Span &original);
		
			void			addNumber(int num);
			unsigned int	shortestSpan();
			unsigned int	longestSpan();
};
