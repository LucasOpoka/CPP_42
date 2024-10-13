/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:50:46 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/13 15:19:14 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
				WrongCat();
				WrongCat(const WrongCat &original);
				~WrongCat();

				WrongCat &operator = (const WrongCat &original);

				void makeSound() const;
};
