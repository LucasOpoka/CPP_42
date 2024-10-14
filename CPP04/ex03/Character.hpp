/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:18:15 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/14 14:49:21 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "ICharacter.hpp"

class Character: public	ICharacter
{
	private:
			std::string	_name;
			AMateria	*_inventory[4];
	public:
			Character();
			Character(const std::string &name);
			Character(const Character &original);
			~Character();
	
			Character &operator = (const Character &original);
	
			const std::string &getName() const;
			void equip(AMateria *m);
			void unequip(int idx);
			void use(int idx, ICharacter &target);
			AMateria *getInventory(int idx);
};
