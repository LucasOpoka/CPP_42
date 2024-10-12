/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:15:55 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/12 23:36:28 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	uno("WhatIsLove");
	DiamondTrap	duo("BabyDontHurtMe");

	uno.attack("BabyDontHurtMe");
	duo.takeDamage(0);
	duo.beRepaired(9999);
	
	DiamondTrap	thisOneIsAngry(duo);

	thisOneIsAngry.attack("WhatIsLove");
	uno.takeDamage(10);
	uno.beRepaired(10);

	for (int i = 0; i < 10; i++)
		thisOneIsAngry.attack("WhatIsLove");

	uno.takeDamage(1);
	thisOneIsAngry.beRepaired(1);

	thisOneIsAngry.whoAmI();

	DiamondTrap("NoooMooo");

	return 0;
}
