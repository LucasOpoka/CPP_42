/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:14:12 by lopoka            #+#    #+#             */
/*   Updated: 2024/11/07 16:52:08 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int N = -42;

	horde = zombieHorde(N, "FooToo");
	for (int i = 0; i < N; i++)
	{
		std::cout << std::setw(2) << i << " ";
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}
