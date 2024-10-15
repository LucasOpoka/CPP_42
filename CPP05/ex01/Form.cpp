/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:25:58 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/15 13:27:10 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Form.hpp"

Form::Form(): _name("DefaultName"), _signed(0), _signGrade(150), _execGrade(150) {}

Form::Form(const std::string &n, int sG, int eG): _name(n), _signed(0), _signGrade(sG), _execGrade(eG)
{
	if (_signGrade < 1 || _execGrade < 1) throw Form::GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150) throw Form::GradeTooLowException();
}

Form::~Form() {}

Form::Form(const Form &o): _name(o._name), _signed(o._signed), _signGrade(o._signGrade), _execGrade(o._execGrade) {}

Form &Form::operator = (const Form &original)
{
	if (this != &original)
	{
		this->~Form();
		new(this) Form(original);
	}
	return (*this);
}

const std::string &Form::getName() const {return _name;}
bool Form::getSigned() const {return _signed;}
int	Form::getSignGrade() const {return _signGrade;}
int	Form::getExecGrade() const {return _execGrade;}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
		_signed = 1;
	else
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}

std::ostream &operator << (std::ostream &s, const Form &f)
{
	s << "Form name: " << f.getName() << std::endl;
	s << "Signed: " << (f.getSigned() ? "True" : "False" ) << std::endl;
	s << "Sign Grade: " << f.getSignGrade() << std::endl;
	s << "Execute Grade: " << f.getExecGrade() << std::endl;
	return (s);
}
