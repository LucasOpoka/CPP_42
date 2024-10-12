/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:15:55 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/12 19:57:32 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	vannila;
	ScavTrap	uno("'What is love?'");
	ScavTrap	duo("'Baby dont hurt me!'");

	uno.attack("'Baby dont hurt me!'");
	duo.takeDamage(0);
	duo.beRepaired(9999);
	
	ScavTrap	thisOneIsAngry(duo);

	thisOneIsAngry.attack("'What is love?'");
	uno.takeDamage(10);
	uno.beRepaired(10);

	for (int i = 0; i < 10; i++)
		thisOneIsAngry.attack("'What is love?'");

	uno.takeDamage(1);
	thisOneIsAngry.beRepaired(1);
	return 0;
}
