/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:55:43 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/27 18:00:38 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>

class harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
	public:
		harl();
		~harl();
		void	complain(std::string level);
};

#endif