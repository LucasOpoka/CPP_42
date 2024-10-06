/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:59:26 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/06 12:19:34 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include "Contact.hpp"

std::string get_input(std::string prompt);

class PhoneBook
{
	private:
			Contact book[8];
			int		index;
			int		count;
	public:
			PhoneBook();
			void add();
			void search();
};
#endif
