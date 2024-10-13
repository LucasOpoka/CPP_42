/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:50:46 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/13 15:40:49 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
				std::string _type;
	public:
				WrongAnimal();
				WrongAnimal(const std::string &type);
				WrongAnimal(const WrongAnimal &original);
				~WrongAnimal();

				WrongAnimal &operator = (const WrongAnimal &original);

				void makeSound() const;
				std::string getType() const;
};
