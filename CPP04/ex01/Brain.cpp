/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:55:11 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/13 17:23:11 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "Random object oriented idea";
}

Brain::Brain(const Brain &original)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = original._ideas[i];
}

Brain::~Brain() {std::cout << "Brain destructor called" << std::endl;}

Brain &Brain::operator = (const Brain &original)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &original)
	{
		this->~Brain();
		new(this) Brain(original);
	}
	return *this;
}
