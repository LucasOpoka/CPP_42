/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:51:58 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/26 15:20:46 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <stack>
#include <string>
#include <sstream>
#include <iostream>

class RPN
{
	private:
			std::string _expression;
			std::stack<int> _stack;
			void _performOperation(std::string &token);

	public:
			RPN();
			RPN(std::string expression);
			RPN(const RPN &original);
			~RPN();
	
			RPN &operator = (const RPN &original);
	
			int calcExpression();
};

int	myPop(std::stack<int> &stack);
