/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:58:07 by egomez-g          #+#    #+#             */
/*   Updated: 2024/04/24 15:30:57 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(Intern &ref);
		Intern &operator=(Intern const &rhs);
		
		AForm*	 makeForm(std::string type, std::string name);
};
