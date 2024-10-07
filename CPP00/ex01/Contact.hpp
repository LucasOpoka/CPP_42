/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:55:22 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/07 15:46:38 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact {
	private:
			int			_index;
			std::string	_first_name;
			std::string	_last_name;
			std::string	_nickname;
			std::string	_phone_number;
			std::string	_secret;
	public:
			Contact();
			Contact(int 		index,
					std::string	first_name,
					std::string	last_name,
					std::string	nickname,
					std::string	phone_number,
					std::string	secret);
			void print_short();
			void print_long();
};
#endif
