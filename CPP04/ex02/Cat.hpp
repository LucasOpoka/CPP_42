/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:50:46 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/13 17:13:26 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
			Brain *_brain;
	public:
			Cat();
			Cat(const Cat &original);
			~Cat();

			Cat &operator = (const Cat &original);

			void makeSound() const;
};
