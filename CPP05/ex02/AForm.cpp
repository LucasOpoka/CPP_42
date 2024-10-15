/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:25:58 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/15 17:25:19 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AForm.hpp"

AForm::AForm(): _name("DefaultName"), _signed(0), _signGrade(150), _execGrade(150) {}

AForm::AForm(const std::string &n, int sG, int eG): _name(n), _signed(0), _signGrade(sG), _execGrade(eG)
{
	if (_signGrade < 1 || _execGrade < 1) throw AForm::GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150) throw AForm::GradeTooLowException();
}

AForm::~AForm() {}

AForm::AForm(const AForm &o): _name(o._name), _signed(o._signed), _signGrade(o._signGrade), _execGrade(o._execGrade) {}

// In this case we can only change the _signed member, since others are const and we can't use new on an abstract class
AForm &AForm::operator = (const AForm &original)
{
	if (this != &original)
	{
		_signed = original._signed;
	}
	return (*this);
}

const std::string &AForm::getName() const {return _name;}
bool AForm::getSigned() const {return _signed;}
int	AForm::getSignGrade() const {return _signGrade;}
int	AForm::getExecGrade() const {return _execGrade;}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
		_signed = 1;
	else
		throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}

const char *AForm::NotSignedException::what() const throw()
{
	return "Form not signed!";
}

std::ostream &operator << (std::ostream &s, const AForm &f)
{
	s << "Form name: " << f.getName() << std::endl;
	s << "Signed: " << (f.getSigned() ? "True" : "False" ) << std::endl;
	s << "Sign Grade: " << f.getSignGrade() << std::endl;
	s << "Execute Grade: " << f.getExecGrade() << std::endl;
	return (s);
}
