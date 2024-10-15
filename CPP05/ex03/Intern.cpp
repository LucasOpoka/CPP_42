/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:58:46 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/15 20:35:58 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &o) {(void)o;}
Intern::~Intern() {}
Intern &Intern::operator = (const Intern &o) {(void)o; return *this;}

AForm *Intern::makeShrb(const std::string &trgt) {return new ShrubberyCreationForm(trgt);}
AForm *Intern::makeRobo(const std::string &trgt) {return new RobotomyRequestForm(trgt);}
AForm *Intern::makePres(const std::string &trgt) {return new PresidentialPardonForm(trgt);}

AForm *Intern::makeForm(const std::string &type, const std::string &target)
{
	int i = 0;
	std::string forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm*	(*functions[3])(const std::string &target) = {&Intern::makeShrb, &Intern::makeRobo, &Intern::makePres};

	for (; i < 3 && type != forms[i]; i++);
	std::cout << (i < 3 ? "Intern created " + forms[i] : "Invalid form type, no form created!") << std::endl;
	return ((i < 3) ? functions[i](target) : 0);
}

