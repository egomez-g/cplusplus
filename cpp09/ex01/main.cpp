/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:08:11 by egomez-g          #+#    #+#             */
/*   Updated: 2024/06/03 14:28:33 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "RPN.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " \"OPERATION\"\n";
		return 1;
	}
	
	try {
		int res = RPN::ResolveExpression(argv[1]);
		std::cout << "Result: " << res << '\n';
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << '\n';
		return 1;
	}
	
	return 0;
}