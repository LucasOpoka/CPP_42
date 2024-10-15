/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:25:58 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/15 18:41:43 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():	AForm("PPF", 25, 5), _target("DefaultTarget") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): AForm("PPF", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &o): AForm(o), _target(o._target) {}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &o)
{
	if (this != &o)
	{
		this->~PresidentialPardonForm();
		new(this) PresidentialPardonForm(o);
	}
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (!this->getSigned())
		throw AForm::NotSignedException();

	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();

	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
