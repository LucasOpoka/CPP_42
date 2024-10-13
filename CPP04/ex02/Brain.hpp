/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:51:45 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/13 17:03:57 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>
#include <iostream>

class Brain
{
	private:
			std::string _ideas[100];
	public:
			Brain();
			Brain(const Brain &original);
			~Brain();

			Brain	&operator = (const Brain &original);
};
