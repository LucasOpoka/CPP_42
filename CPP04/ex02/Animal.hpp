/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:50:46 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/13 18:07:42 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <iostream>
#include <string>

class Animal
{
	protected:
				std::string _type;
	public:
				Animal();
				Animal(const std::string &type);
				Animal(const Animal &original);
				virtual ~Animal();

				Animal &operator = (const Animal &original);

				virtual void makeSound() const = 0;
				std::string getType() const;
};
