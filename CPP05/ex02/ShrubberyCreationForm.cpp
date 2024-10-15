/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:25:58 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/15 17:15:09 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ShrubberyCreationForm.hpp"

#define itz_a_tree_Mario "\
          &&& &&  & &&\n\
      && &\\/&\\|& ()|/ @, &&\n\
      &\\/(/&/&||/& /_/)_&/_&\n\
   &() &\\/&|()|/&\\/ '%' & ()\n\
  &_\\_&&_\\ |& |&&/&__%_/_& &&\n\
&&   && & &| &| /& & % ()& /&&\n\
 ()&_---()&\\&\\|&&-&&--%---()~\n\
     &&     \\|||\n\
             |||\n\
             |||\n\
             |||\n\
       , -=-~  .-^- _\n\
 _____________________________\n\
| Why is it, when you want a |\n\
| stupid tree, it is so much |\n\
|   bureaucracy to get it?   |\n\
 -----------------------------\n"

ShrubberyCreationForm::ShrubberyCreationForm():	AForm("SCF", 145, 137), _target("DefaultTarget") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("SCF", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &o): AForm(o), _target(o._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &o)
{
	if (this != &o)
	{
		this->~ShrubberyCreationForm();
		new(this) ShrubberyCreationForm(o);
	}
	return (*this);
}

const char *ShrubberyCreationForm::FileOpeningException::what() const throw()
{
	return "Couldn't open file!";
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (!this->getSigned())
		throw AForm::NotSignedException();

	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	
	std::ofstream outFile((_target + "_shrubbery").c_str());
	if (!outFile.is_open())
		throw ShrubberyCreationForm::FileOpeningException();
	outFile << itz_a_tree_Mario;
	outFile.close();
}
