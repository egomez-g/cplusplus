/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:40:09 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/27 15:33:10 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string brain;
	std::string *stringPTR;
	std::string &stringREF = brain;
	
	brain = "HI THIS IS BRAIN";
	stringPTR = &brain;
	
	std::cout << "mem str: " << &brain << std::endl;
	std::cout << "mem stringPTR: " << stringPTR << std::endl;
	std::cout << "mem stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "value str: " << brain << std::endl;
	std::cout << "value stringPTR: " << *stringPTR << std::endl;
	std::cout << "value stringREF: " << stringREF << std::endl;

	return (0);
}