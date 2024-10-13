/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:50:46 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/13 15:10:45 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "Animal.hpp"

class Dog: public Animal
{
	public:
				Dog();
				Dog(const Dog &original);
				~Dog();

				Dog &operator = (const Dog &original);

				void makeSound() const;
};
