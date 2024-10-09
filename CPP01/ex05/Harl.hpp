/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:19:18 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/09 20:26:42 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string>
#include <iostream>

class Harl
{
	private:
			void	_debug(void);
			void	_info(void);
			void	_warning(void);
			void	_error(void);
	public:
			void 	complain(std::string level);
};
