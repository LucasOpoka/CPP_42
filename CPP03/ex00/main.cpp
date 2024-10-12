/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:15:55 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/12 18:33:49 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	vannila;
	ClapTrap	uno("'What is love?'");
	ClapTrap	duo("'Baby dont hurt me!'");

	uno.attack("'Baby dont hurt me!'");
	duo.takeDamage(0);
	duo.beRepaired(9999);
	
	ClapTrap	thisOneIsAngry(duo);

	thisOneIsAngry.attack("'What is love?'");
	uno.takeDamage(10);
	uno.beRepaired(10);

	for (int i = 0; i < 10; i++)
		thisOneIsAngry.attack("'What is love?'");

	uno.takeDamage(1);
	thisOneIsAngry.beRepaired(1);
	return 0;
}
