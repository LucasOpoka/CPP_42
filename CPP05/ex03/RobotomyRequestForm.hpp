/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:13:41 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/15 18:27:15 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm: public AForm
{
	private:
			const std::string _target;	
	public:
			RobotomyRequestForm();
			RobotomyRequestForm(const RobotomyRequestForm& original);
			RobotomyRequestForm(const std::string &target);
			~RobotomyRequestForm();

			RobotomyRequestForm &operator = (const RobotomyRequestForm &original);

			void execute(const Bureaucrat &executor) const;
};
