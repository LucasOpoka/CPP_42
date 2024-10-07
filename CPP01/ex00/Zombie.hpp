/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:42:38 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/07 16:54:29 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include <string>

class Zombie
{
	private:
			std::string _name;
	public:
			Zombie(std::string name);
			~Zombie(void);
			void announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
