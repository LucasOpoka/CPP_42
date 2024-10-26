/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:04:20 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/26 16:27:20 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "RPN.hpp"

RPN::RPN() {}
RPN::RPN(std::string expression): _expression(expression) {}
RPN::RPN(const RPN &o): _expression(o._expression), _stack(o._stack) {}
RPN::~RPN() {}

RPN &RPN::operator = (const RPN &original)
{
	if (this != &original)
	{
		this->~RPN();
		new(this) RPN(original);
	}
	return *this;
}

int RPN::calcExpression()
{
    std::istringstream expr_stream(_expression);
    std::string token;
	std::string operators = "+-/*"; 
 
    while(std::getline(expr_stream, token, ' '))
    {
		if (token.empty())
			throw(std::runtime_error("Empty token in expression!"));
		else if (token.length() == 1 && operators.find(token) != std::string::npos)
			_performOperation(token);
		else
        	_stack.push(std::stoi(token));
    }
	if (_stack.size() != 1)
		throw(std::runtime_error("Invalid expression, more operands than operators!"));
	return _stack.top();
}

int	myPop(std::stack<int> &stack)
{
	int n = stack.top();
	stack.pop();
	return n;
}

void RPN::_performOperation(std::string &token)
{
	if (_stack.size() < 2)
		throw(std::runtime_error("Invalide expression, operator with missing operands!"));
	int b = myPop(_stack);
	int a = myPop(_stack);
	if (token == "+")
		_stack.push(a + b);
	if (token == "-")
		_stack.push(a - b);
	if (token == "/")
		_stack.push(a / b);
	if (token == "*")
		_stack.push(a * b);
}
