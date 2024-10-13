/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:17:04 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/13 18:15:51 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	//const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	//meta->makeSound();

	//delete meta;
	delete j;
	delete i;

	std::cout << "----- Wrong stuff below -----" << std::endl;

	const WrongAnimal* meta_w = new WrongAnimal();
	const WrongAnimal* i_w = new WrongCat();
	
	std::cout << i_w->getType() << " " << std::endl;
	i_w->makeSound();
	meta_w->makeSound();

	delete meta_w;
	delete i_w;

}
