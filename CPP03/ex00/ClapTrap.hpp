/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:12:00 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/12 18:18:40 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>
#include <iostream>

class ClapTrap
{
	private:
			std::string		_name;
			unsigned int	_hitPts;
			unsigned int	_engPts;
			unsigned int	_attPts;
	public:
			ClapTrap();
			ClapTrap(const std::string &name);
			ClapTrap(const ClapTrap &original);
			~ClapTrap();

			ClapTrap &operator = (const ClapTrap &original);

			void attack(const std::string &target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
};
