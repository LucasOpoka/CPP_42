/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:37:38 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/14 15:43:43 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	
	{
		std::cout << std::endl << "Unequip without leaks test" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter *Lucas = new Character("Lucas");
		for (int i = 0; i < 4; i++)
			me->use(i, *Lucas);
		
		//Just unequiping is no good, let's drop stuff on the floor :P
		ICharacter *floor = new Character("floor");
		for (int i = 0; i < 4; i++)
		{
			floor->equip(((Character *)me)->getInventory(i));
			me->unequip(i);
		}
		
		for (int i = 0; i < 4; i++)
			floor->use(i, *Lucas);
		
		std::cout << std::endl << "When floor is already full .equip() takes care of deleting" << std::endl;
		
		for (int i = 0; i < 4; i++)
			me->equip(src->createMateria("ice"));
		for (int i = 0; i < 4; i++)
			me->use(i, *floor);
		for (int i = 0; i < 4; i++)
		{
			floor->equip(((Character *)me)->getInventory(i));
			me->unequip(i);
		}
	
		delete floor;
		delete Lucas;
		delete me;
		delete src;
	}
	return 0;
}
