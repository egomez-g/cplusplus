/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:56:54 by egomez-g          #+#    #+#             */
/*   Updated: 2024/03/02 16:15:07 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	private:
		bool guardingGate;
	public:
		ScavTrap();
		ScavTrap(std::string name);

		virtual ~ScavTrap();

		void	attack(const std::string &target);
		void	guardGate(void);
};

#endif
