/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:51:13 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/15 20:18:04 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
			Intern();
			Intern(const Intern &original);
			~Intern();

			Intern &operator = (const Intern &original);

			AForm *makeForm(const std::string &type, const std::string &target);
			static AForm *makeShrb(const std::string& target);
			static AForm *makeRobo(const std::string& target);
			static AForm *makePres(const std::string& target);
};
