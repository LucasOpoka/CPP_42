/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:13:41 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/15 18:39:07 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
			const std::string _target;	
	public:
			PresidentialPardonForm();
			PresidentialPardonForm(const PresidentialPardonForm& original);
			PresidentialPardonForm(const std::string &target);
			~PresidentialPardonForm();

			PresidentialPardonForm &operator = (const PresidentialPardonForm &original);

			void execute(const Bureaucrat &executor) const;
};
