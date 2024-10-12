/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:15:55 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/12 21:08:17 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	vannila;
	FragTrap	uno("'What is love?'");
	FragTrap	duo("'Baby dont hurt me!'");

	uno.attack("'Baby dont hurt me!'");
	duo.takeDamage(0);
	duo.beRepaired(9999);
	
	FragTrap	thisOneIsAngry(duo);

	thisOneIsAngry.attack("'What is love?'");
	uno.takeDamage(10);
	uno.beRepaired(10);

	for (int i = 0; i < 10; i++)
		thisOneIsAngry.attack("'What is love?'");

	uno.takeDamage(1);
	thisOneIsAngry.beRepaired(1);

	thisOneIsAngry.highFivesGuys();

	return 0;
}
