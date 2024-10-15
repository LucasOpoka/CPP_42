/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:13:41 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/15 16:50:09 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
	private:
			const std::string _target;	
	public:
			ShrubberyCreationForm();
			ShrubberyCreationForm(const ShrubberyCreationForm& original);
			ShrubberyCreationForm(const std::string &target);
			~ShrubberyCreationForm();

			ShrubberyCreationForm &operator = (const ShrubberyCreationForm &original);

			void execute(const Bureaucrat &executor) const;

			class FileOpeningException;
};

class ShrubberyCreationForm::FileOpeningException: public std::exception
{
	public:
    		const char *what() const throw();
};
