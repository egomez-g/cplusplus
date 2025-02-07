/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:40:06 by egomez-g          #+#    #+#             */
/*   Updated: 2024/04/21 19:13:39 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern i;

	AForm* f = i.makeForm("robotomy request", "Paco");
	std::cout << *f;
	AForm* f2 = i.makeForm("shrubbery creation", "Jaime");
	std::cout << *f2;
	AForm* f3 = i.makeForm("presidential pardon", "Manolo");
	std::cout << *f3;

	delete f;
	delete f2;
	delete f3;

	std::cout << std::endl;
	AForm* f4 = i.makeForm("Paco", "Sans");
	(void) f4;
	return (0);
}