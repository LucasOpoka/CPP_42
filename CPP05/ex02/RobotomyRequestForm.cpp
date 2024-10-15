/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:25:58 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/15 18:36:39 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():	AForm("RRF", 72, 45), _target("DefaultTarget") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): AForm("RRF", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &o): AForm(o), _target(o._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &o)
{
	if (this != &o)
	{
		this->~RobotomyRequestForm();
		new(this) RobotomyRequestForm(o);
	}
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (!this->getSigned())
		throw AForm::NotSignedException();

	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	
	std::cout << "The symphony of drilling noises commences..." << std::endl;

	std::srand(time(NULL));
	if (rand() % 2)
		std::cout << _target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "The robotomy failed, perhaps next time.." << std::endl;	
}
