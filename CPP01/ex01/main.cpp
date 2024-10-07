/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:14:12 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/07 19:50:35 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;

	horde = zombieHorde(42, "FooToo");
	for (int i = 0; i < 42; i++)
	{
		std::cout << std::setw(2) << i << " ";
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}
