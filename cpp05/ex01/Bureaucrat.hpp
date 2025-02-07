/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:37:45 by egomez-g          #+#    #+#             */
/*   Updated: 2024/04/24 14:25:21 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{

	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string cpy_name, int cpy_grade);
		Bureaucrat(Bureaucrat &ref);
		~Bureaucrat();
		Bureaucrat & operator=(Bureaucrat const &rhs);

		std::string getName();
		int 		getGrade();
		void		incrementGrade(int num);
		void		decrementGrade(int num);
		void		signForm(Form *form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat bureaucrat);

#endif