/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:55:06 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/27 18:27:33 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: bad input\n";
		return (1);
	}
	harl	h;

	h.complain(argv[1]);

	return (0);
}