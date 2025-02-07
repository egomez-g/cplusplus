/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:46:13 by egomez-g          #+#    #+#             */
/*   Updated: 2024/04/24 15:28:29 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("SCform", 145, 137), _target("home")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("SCform", 145, 137), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &ref) : AForm(ref.getName(), ref.getGradeToSign(), ref.getGradeToExe())
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->setSigned(rhs.getSigned());
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (!this->getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExe())
		throw GradeTooLowException();

	std::ofstream outfile;
	outfile.open(std::string(this->_target + "_shrubbery").c_str());
	if (!outfile.is_open()) {
		std::cerr << "fatal: can't open outfile" << std::endl;
		return ;
	}
	outfile << "| a s c i i  t r e e s |" << std::endl;
	outfile.close();;
}
