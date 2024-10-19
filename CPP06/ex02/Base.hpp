/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:47:29 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/19 16:11:12 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <iostream>

class Base
{
	public:
			virtual	~Base();
};

Base *generate();
void identify(Base *p);
void identify(Base &p);
