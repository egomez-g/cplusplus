/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:36:08 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/26 11:58:30 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int main()
{
	Phonebook book;
	std::string	input;
	
	while (1)
	{
		std::cout << "Add contact, search contact or exit\n";
		std::cin >> input;
		if (!input.compare("EXIT"))
			break ;
		else if (!input.compare("ADD"))
			book.add();
		else if (!input.compare("SEARCH"))
			book.search();
		else
			std::cout << "Command not found\n";
	}
	return (0);
}
