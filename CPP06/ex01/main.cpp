/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:06:34 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/19 14:18:59 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Serializer.hpp"

int	main(void)
{
	Data stc;
	Data *stc_ptr;
	uintptr_t ptr_as_unsigned_int;

	stc.name = "Lucas";
	stc.age = 29;

	std::cout << "Original name: " << stc.name << std::endl;
	std::cout << "Original age: " << stc.age << std::endl;
	std::cout << "Original address: " << &stc << std::endl;
	
	ptr_as_unsigned_int = Serializer::serialize(&stc);
	std::cout << std::endl;
	std::cout << "ptr_as_unsigned_int value: " << ptr_as_unsigned_int << std::endl;
	std::cout << std::endl;

	stc_ptr = Serializer::deserialize(ptr_as_unsigned_int);
	std::cout << "Name after casts: " << stc_ptr->name << std::endl;
	std::cout << "Age after casts: " << stc_ptr->age << std::endl;
	std::cout << "Address after casts: " << stc_ptr << std::endl;

	return (0);
}
