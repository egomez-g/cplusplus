/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:44:16 by egomez-g          #+#    #+#             */
/*   Updated: 2024/04/14 16:22:35 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExe;

	public:
		AForm();
		AForm(std::string cpyName, int gradeToSign, int gradeToExe);
		virtual	~AForm() = 0;
		AForm(AForm &ref);
		AForm & operator=(AForm const &rhs);

		std::string		getName() const;
		bool			getSigned() const;
		int				getGradeToSign();
		int				getGradeToExe() const;
		void			setSigned(bool isSigned);

		void			beSigned(Bureaucrat buro);
		virtual void	execute(Bureaucrat const & executor) const = 0;

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

		class FormNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class FormAlreadySignedException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, AForm &AForm);

#endif