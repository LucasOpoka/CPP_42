/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:14:12 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/07 17:47:42 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

void stack_graveyard(void)
{
	std::cout << std::endl << "This subfunc allocs a zombie on its stack"
			  << std::endl;
	randomChump("StackZombie");
}

Zombie *heap_graveyard(void)
{
	std::cout << std::endl << "This subfunc allocs a zombie on the heap"
			  << std::endl;
	return newZombie("HeapZombie");
}

int main(void)
{
	Zombie *heap_zombie;

	stack_graveyard();
	heap_zombie = heap_graveyard();

	std::cout << std::endl << "Then it is announced from the main:"
			  << std::endl;
	heap_zombie->announce();
	std::cout << std::endl << "As the main graveyard keeper we shal purge it!!!"
			  << std::endl;
	delete(heap_zombie);
	std::cout << std::endl;	
	return 0;
}
