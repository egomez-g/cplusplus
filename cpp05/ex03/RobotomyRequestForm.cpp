/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:46:49 by egomez-g          #+#    #+#             */
/*   Updated: 2024/04/24 15:25:00 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RRform", 72, 45), _target("home")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RRform", 72, 45), _target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &ref) : AForm(ref.getName(), ref.getGradeToSign(), ref.getGradeToExe())
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->setSigned(rhs.getSigned());
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (!this->getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExe())
		throw GradeTooLowException();
	std::string msgs[] = {
		" has been robotomized!!",
		" has not been robotomized, robotomy failed...."
	};

	srand(time(NULL));
	std::cout << this->getName() << msgs[rand() % 2] << std::endl;
}
