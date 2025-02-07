/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:40:06 by egomez-g          #+#    #+#             */
/*   Updated: 2024/04/21 17:25:09 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "--- 1. Creating the forms  and bureaucrats ---" << std::endl;
		ShrubberyCreationForm shrub("scf");
		RobotomyRequestForm robot("robot");
		PresidentialPardonForm pres("pres");
		Bureaucrat ceo("CEO", 1);
		Bureaucrat bob("Bob", 70);

		std::cout << shrub << std::endl;
		std::cout << robot << std::endl;
		std::cout << pres << std::endl;
		std::cout << bob << std::endl;
		std::cout << ceo << std::endl;
	std::cout << std::endl;

	std::cout << "--- 2. CEO  and Bob try executing the forms ---" << std::endl;
		ceo.executeForm(shrub);
		ceo.executeForm(robot);
		ceo.executeForm(pres);
		bob.executeForm(shrub);
		bob.executeForm(robot);
		bob.executeForm(pres);
	std::cout << std::endl;

	std::cout << "--- 3. CEO and Bob try signing the forms ---" << std::endl;
		bob.signForm(&shrub);
		bob.signForm(&robot);
		bob.signForm(&pres);
		ceo.signForm(&shrub);
		ceo.signForm(&robot);
		ceo.signForm(&pres);
		ceo.signForm(&pres);
	std::cout << std::endl;

	std::cout << "--- 4. CEO  and Bob try executing the forms again ---" << std::endl;
		bob.executeForm(shrub);
		bob.executeForm(robot);
		bob.executeForm(pres);
		ceo.executeForm(shrub);
		ceo.executeForm(robot);
		ceo.executeForm(pres);
	std::cout << std::endl;

	return (0);
}