/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:35:02 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/15 20:39:56 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Intern.hpp"

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

	Intern LittleLuigi;

	AForm *piece_of_paper = LittleLuigi.makeForm("PresidentialPardonForm", "Lucas");
	SupremeMario.signForm(*piece_of_paper);
	SupremeMario.executeForm(*piece_of_paper);

	delete piece_of_paper;

	return 0;
}
