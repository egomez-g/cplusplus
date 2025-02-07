/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:37:45 by egomez-g          #+#    #+#             */
/*   Updated: 2024/04/25 11:43:52 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{

	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string cpy_name, int cpy_grade);
		Bureaucrat(Bureaucrat &ref);
		Bureaucrat &operator=(Bureaucrat const &rhs);
		~Bureaucrat();

		std::string getName() const;
		int 		getGrade() const;
		void		incrementGrade(int num);
		void		decrementGrade(int num);
		void		signForm(AForm *form);

		void		executeForm(AForm const & form);

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