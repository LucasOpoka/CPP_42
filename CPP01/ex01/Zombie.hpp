/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:42:38 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/07 19:50:21 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Zombie
{
	private:
			std::string _name;
	public:
			Zombie();
			Zombie(std::string name);
			~Zombie(void);
			void announce(void);
			void label(std::string name);
};

Zombie *zombieHorde(int N, std::string name);
