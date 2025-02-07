/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:44:16 by egomez-g          #+#    #+#             */
/*   Updated: 2024/04/24 14:38:54 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExe;

	public:
		Form(std::string cpyName, int gradeToSign, int gradeToExe);
		Form(Form &ref);
		~Form();
		Form & operator=(Form const &rhs);

		std::string	getName();
		bool		getSigned();
		int			getGradeToSign();
		int			getGradeToExe();
		void		setSigned(bool isSigned);

		void		beSigned(Bureaucrat buro);

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

std::ostream &operator<<(std::ostream &o, Form form);

#endif