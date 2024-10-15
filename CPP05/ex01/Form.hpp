/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:13:41 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/15 12:25:53 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{	
	private:
			const std::string	_name;
			bool				_signed;
			const int			_signGrade;
			const int			_execGrade;
	public:
			Form();
			Form(const Form& original);
			Form(const std::string &name, int signGrade, int execGrade);
			~Form();

			Form &operator = (const Form& original);

			const std::string &getName() const;
			bool getSigned() const;
			int	getSignGrade() const;
			int	getExecGrade() const;
			void beSigned(const Bureaucrat& bureaucrat);

			class GradeTooHighException;
			class GradeTooLowException;
};

std::ostream &operator << (std::ostream &stream, const Form &form);

class Form::GradeTooHighException : public std::exception
{
	public:
    		const char *what() const throw();
};

class Form::GradeTooLowException : public std::exception
{
	public:
    		const char *what() const throw();
};
