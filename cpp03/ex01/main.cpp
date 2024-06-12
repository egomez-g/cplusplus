/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:08:15 by egomez-g          #+#    #+#             */
/*   Updated: 2024/03/02 14:17:15 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap a;
	ScavTrap b("Paco");

	a.attack("CloneTrap");
	a.takeDamage(21);
	a.beRepaired(22);
	a.guardGate();
	a.guardGate();
	b.attack("Savage-clone");
	b.takeDamage(101);
	b.takeDamage(15);
	b.attack("ScavTrap-clone");

	return (0);
}
