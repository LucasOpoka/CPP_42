/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:13:44 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/14 20:39:17 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>
#include <iostream>

class Bureaucrat
{
	private:
			const std::string	_name;
			int					_grade;
	public:
			Bureaucrat();
			Bureaucrat(const Bureaucrat &original);
			Bureaucrat(std::string name, int grade);
			~Bureaucrat();
			
			Bureaucrat &operator = (const Bureaucrat &original);
			
			int getGrade() const;
			const std::string &getName() const;
			void incrGrade();
			void decrGrade();

			class GradeTooHighException;
			class GradeTooLowException;
};

std::ostream &operator << (std::ostream &stream, const Bureaucrat &bureaucrat);

class Bureaucrat::GradeTooHighException: public std::exception
{
	public:
    		const char *what() const throw();
};

class Bureaucrat::GradeTooLowException: public std::exception
{
	public:
    		const char *what() const throw();
};
