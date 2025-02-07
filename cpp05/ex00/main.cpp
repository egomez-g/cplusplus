/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:40:06 by egomez-g          #+#    #+#             */
/*   Updated: 2024/04/24 12:51:56 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *Paco;
	
	try
	{
		Paco = new Bureaucrat("Juan", 0);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Paco = new Bureaucrat("Juan", 160);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	Paco = new Bureaucrat("Paco", 15);
	std::cout << *Paco << std::endl;
	Bureaucrat *Manolin = new Bureaucrat("manolin", 35);
	std::cout << *Manolin << std::endl;
	try
	{
		Manolin->incrementGrade(120);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Manolin->decrementGrade(150);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << *Manolin << std::endl;
	Manolin->decrementGrade(30);
	std::cout << *Manolin << std::endl;
	Manolin->incrementGrade(30);
	std::cout << *Manolin << std::endl;
	return (0);
}