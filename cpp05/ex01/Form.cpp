/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:44:08 by egomez-g          #+#    #+#             */
/*   Updated: 2024/04/24 15:08:18 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, const int gradeToSign, const int gradeToExe) : _name(name), _gradeToSign(gradeToSign), _gradeToExe(gradeToExe)
{
	if (gradeToSign > 150)
		throw GradeTooLowException();
	if (gradeToSign < 1)
		throw GradeTooHighException();
	this->_signed = false;
}

Form::~Form()
{
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("The grade is too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("The grade is too low!");
}

Form::Form(Form &ref) : _name(ref._name), _signed(ref._signed), _gradeToSign(ref._gradeToSign), _gradeToExe(ref._gradeToExe)
{
}

Form & Form::operator=(Form const &rhs)
{
	this->_signed = rhs._signed;
	return (*this);
}

std::string	Form::getName()
{
	return (this->_name);
}
bool	Form::getSigned()
{
	return (this->_signed);
}
int	Form::getGradeToSign()
{
	return (this->_gradeToSign);
}

int	Form::getGradeToExe()
{
	return(this->_gradeToExe);
}

void	Form::setSigned(bool isSigned)
{
	this->_signed = isSigned;
}

void	Form::beSigned(Bureaucrat buro)
{
	if (buro.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	this->_signed = true;
}
std::ostream &operator<<(std::ostream &o, Form form)
{
	o << form.getName();
	if (form.getSigned())
		o << " is signed\ngrade to sign: ";
	else
		o << " isn't signed\ngrade to sign: ";
	o << form.getGradeToSign();
	o << "\ngrade to exe: ";
	o << form.getGradeToExe() << "\n";
	return (o);
}
