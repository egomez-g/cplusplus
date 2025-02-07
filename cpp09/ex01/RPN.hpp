/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:08:26 by egomez-g          #+#    #+#             */
/*   Updated: 2024/06/03 14:13:11 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string> // std::string
#include <stack> // stack<>
#include <stdexcept> // std::runtime_error()

class RPN {
public:
	typedef int result_type;

	static result_type ResolveExpression(const std::string &line);
private:
	typedef result_type token_type;
	typedef unsigned char op_type;

	RPN();
	~RPN();
	RPN(const RPN &rhs);
	RPN& operator=(const RPN &rhs);

	static std::stack<token_type> stack_;

	static const int op_size = 4;
	static const struct operations {
		op_type symbol;
		token_type (*calc)(const token_type &lhs, const token_type &rhs);
	} operations_[op_size];

	static void PopOperandsTokens(token_type &lhs, token_type &rhs);
	static void PushToken(token_type token);

	static void Operate(op_type symbol);

	static token_type OpSum(const token_type &lhs, const token_type &rhs);
	static token_type OpSub(const token_type &lhs, const token_type &rhs);
	static token_type OpMul(const token_type &lhs, const token_type &rhs);
	static token_type OpDiv(const token_type &lhs, const token_type &rhs);
};
