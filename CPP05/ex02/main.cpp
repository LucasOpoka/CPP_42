/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:35:02 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/15 18:44:31 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	ShrubberyCreationForm tree_form("tree");
	Bureaucrat SupremeMario("SupremeMario", 1);
	SupremeMario.signForm(tree_form);
	
	ShrubberyCreationForm copy;
	copy = tree_form;
	//SupremeMario.executeForm(copy);

	RobotomyRequestForm ROBot("robo");	
	SupremeMario.signForm(ROBot);
	SupremeMario.executeForm(ROBot);

	PresidentialPardonForm LucasIsInnocent("Lucas");
	SupremeMario.signForm(LucasIsInnocent);
	SupremeMario.executeForm(LucasIsInnocent);

	return 0;
}
