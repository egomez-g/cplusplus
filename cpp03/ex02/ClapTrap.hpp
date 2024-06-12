/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:08:11 by egomez-g          #+#    #+#             */
/*   Updated: 2024/03/02 14:06:19 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	protected:
		std::string	name;
		int	hitPoints;
		int	energyPoints;
		int	attackDamage;
	public:
		ClapTrap();
		ClapTrap(ClapTrap &copy);
		ClapTrap(std::string name);

		virtual ~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif