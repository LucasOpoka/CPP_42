/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:12:00 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/12 21:36:32 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
			ScavTrap();
			ScavTrap(const std::string &name);
			ScavTrap(const ScavTrap &original);
			~ScavTrap();

			ScavTrap &operator = (const ScavTrap &original);

			void attack(const std::string &target);
			void guardGate();
};
