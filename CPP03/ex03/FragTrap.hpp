/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:12:00 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/12 21:36:53 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
			FragTrap();
			FragTrap(const std::string &name);
			FragTrap(const FragTrap &original);
			~FragTrap();

			FragTrap &operator = (const FragTrap &original);

			void attack(const std::string &target);
			void highFivesGuys();
};
