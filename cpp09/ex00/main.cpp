/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:32:29 by egomez-g          #+#    #+#             */
/*   Updated: 2024/06/03 12:56:07 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char* argv[])
{
	if (argc != 2) {
		std::cerr << "Error: Invalid number of arguments."
			  << "Usage: " << argv[0] << " INPUT_FILE\n";
		return 1;
	}

	BitcoinExchange exchange("data.csv");
	exchange.ProcessInput(argv[1]);

	return 0;
}
