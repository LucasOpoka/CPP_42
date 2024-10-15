/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:13:41 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/15 17:15:36 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
{	
	private:
			const std::string	_name;
			bool				_signed;
			const int			_signGrade;
			const int			_execGrade;
	public:
			AForm();
			AForm(const AForm& original);
			AForm(const std::string &name, int signGrade, int execGrade);
			~AForm();

			AForm &operator = (const AForm &original);

			const std::string &getName() const;
			bool getSigned() const;
			int	getSignGrade() const;
			int	getExecGrade() const;
			void beSigned(const Bureaucrat &bureaucrat);
			virtual void execute(const Bureaucrat &executor) const = 0;

			class GradeTooHighException;
			class GradeTooLowException;
			class NotSignedException;
};

std::ostream &operator << (std::ostream &stream, const AForm &form);

class AForm::GradeTooHighException : public std::exception
{
	public:
    		const char *what() const throw();
};

class AForm::GradeTooLowException : public std::exception
{
	public:
    		const char *what() const throw();
};

class AForm::NotSignedException : public std::exception
{
	public:
    		const char *what() const throw();
};
