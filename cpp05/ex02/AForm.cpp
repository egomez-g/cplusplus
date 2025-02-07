/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:44:08 by egomez-g          #+#    #+#             */
/*   Updated: 2024/04/24 15:09:10 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("AForm"), _signed(false), _gradeToSign(50), _gradeToExe(20)
{	
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExe) : _name(name), _gradeToSign(gradeToSign), _gradeToExe(gradeToExe)
{
	if (gradeToSign > 150)
		throw GradeTooLowException();
	if (gradeToSign < 1)
		throw GradeTooHighException();
	this->_signed = false;
}

AForm::~AForm()
{
}

AForm::AForm(AForm &ref) : _name(ref._name), _signed(ref._signed), _gradeToSign(ref._gradeToSign), _gradeToExe(ref._gradeToExe)
{
}

AForm & AForm::operator=(AForm const &rhs)
{
	this->_signed = rhs._signed;
	return (*this);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("The grade is too high!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("The grade is too low!");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("AForm::FormNotSignedException: fatal: form not signed");
}

const char* AForm::FormAlreadySignedException::what() const throw()
{
	return ("form is already signed");
}

std::string	AForm::getName() const
{
	return (this->_name);
}
bool	AForm::getSigned() const
{
	return (this->_signed);
}
int	AForm::getGradeToSign()
{
	return (this->_gradeToSign);
}

int	AForm::getGradeToExe() const
{
	return(this->_gradeToExe);
}

void	AForm::setSigned(bool isSigned)
{
	this->_signed = isSigned;
}

void	AForm::beSigned(Bureaucrat buro)
{
	if (buro.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	if (this->getSigned())
		throw FormAlreadySignedException();
	this->_signed = true;
}
std::ostream &operator<<(std::ostream &o, AForm &AForm)
{
	o << AForm.getName();
	if (AForm.getSigned())
		o << " is signed\ngrade to sign: ";
	else
		o << " isn't signed\ngrade to sign: ";
	o << AForm.getGradeToSign();
	o << "\ngrade to exe: ";
	o << AForm.getGradeToExe() << "\n";
	return (o);
}
