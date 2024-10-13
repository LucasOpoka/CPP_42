/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:50:46 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/13 14:32:35 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "Animal.hpp"

class Cat: public Animal
{
	public:
				Cat();
				Cat(const Cat &original);
				~Cat();

				Cat &operator = (const Cat &original);

				void makeSound() const;
};
