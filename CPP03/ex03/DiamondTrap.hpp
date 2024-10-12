/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:12:00 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/12 21:19:29 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
			std::string _name;
	public:
			DiamondTrap();
			DiamondTrap(const std::string &name);
			DiamondTrap(const DiamondTrap &original);
			~DiamondTrap();

			DiamondTrap &operator = (const DiamondTrap &original);

			void attack(const std::string &target);
			void whoAmI();
};
