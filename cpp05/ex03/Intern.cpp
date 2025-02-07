/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:58:23 by egomez-g          #+#    #+#             */
/*   Updated: 2024/04/24 16:17:02 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

enum e_forms {
	SHRUBBERY,
	ROBOTOMY,
	PRESIDENTIAL
};

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern &ref)
{
	(void)ref;
}

Intern &Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

AForm*	Intern::makeForm(std::string type, std::string name)
{
	int totalElements = 3;

	static const std::string forms[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	e_forms idx[] = {
		SHRUBBERY,
		ROBOTOMY,
		PRESIDENTIAL
	};

	for (int i = 0; i < totalElements; i++)
	{
		if (forms[i] == type)
		{
			switch (idx[i])
			{
				case SHRUBBERY:
					return new ShrubberyCreationForm(name);
				case ROBOTOMY:
					return new RobotomyRequestForm(name);
				case PRESIDENTIAL:
					return new PresidentialPardonForm(name);
			}
		}
	}
	std::cout << "Intern couldn't create " << type << ": invalid form" << std::endl;

	return (NULL);
}
