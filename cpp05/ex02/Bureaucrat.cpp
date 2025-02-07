/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:37:21 by egomez-g          #+#    #+#             */
/*   Updated: 2024/04/25 11:44:23 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(NULL), _grade(0)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) 
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();

	this->_grade = grade;
}	

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat &ref) : _name(ref.getName())
{
	this->_grade = ref._grade;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat bureaucrat)
{
	o << bureaucrat.getName();
	o << ", bureaucrat grade ";
	o << bureaucrat.getGrade();
	o << ".";
	return (o);
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is too low!");
}

void	Bureaucrat::incrementGrade(int num)
{
	if (this->_grade - num < 1)
		throw GradeTooHighException();
	if (this->_grade - num > 150)
		throw GradeTooLowException();
	this->_grade -= num;
}

void	Bureaucrat::decrementGrade(int num)
{
	if (this->_grade + num < 1)
		throw GradeTooHighException();
	if (this->_grade + num > 150)
		throw GradeTooLowException();
	this->_grade += num;
}

void	Bureaucrat::signForm(AForm *form)
{
	try
	{
		form->beSigned(*this);
	}
	catch (std::exception& e)
	{
		std::cout << this->_name << " couldn't sign " << *form << "because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const& form)
{
	try
	{
		form.execute(*this);
	}
	catch (AForm::GradeTooLowException& e) {
		std::cout << this->getName() << " couldnt execute form " << form.getName();
		std::cout << " (reason: " << e.what() << ")" << std::endl;
		return;
	}
	catch (AForm::FormNotSignedException& e) {
		std::cout << this->getName() << " couldn't sign form " << form.getName();
		std::cout << " (reason: " << e.what() << ")" << std::endl;
		return;
	}
	std::cout << this->getName() << " executed " << form.getName() << std::endl;
}