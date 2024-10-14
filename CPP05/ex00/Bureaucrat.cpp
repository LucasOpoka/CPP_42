/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:14:13 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/14 20:41:22 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("DefaultName"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1) throw Bureaucrat::GradeTooHighException();
	if (grade > 150) throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &o): _name(o._name), _grade(o._grade) {}

Bureaucrat::~Bureaucrat() {}
			
Bureaucrat &Bureaucrat::operator = (const Bureaucrat &original)
{
	if (this != &original)
	{
		this->~Bureaucrat();
		new(this) Bureaucrat(original);
	}
	return (*this);
}
			
int Bureaucrat::getGrade() const
{
	return _grade;
}
const std::string &Bureaucrat::getName() const
{
	return _name;
}

void Bureaucrat::incrGrade()
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrGrade()
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}


std::ostream &operator << (std::ostream &s, const Bureaucrat &b)
{
	s << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return s;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
};

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
};
