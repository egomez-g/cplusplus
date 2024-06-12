/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:08:15 by egomez-g          #+#    #+#             */
/*   Updated: 2024/03/02 15:23:53 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap e;
	FragTrap f("Chadd");

	e.highFiveGuys();
	e.attack("some random dude");
	e.takeDamage(101);
	e.takeDamage(1);
	e.attack("some random dude");
	f.highFiveGuys();

	return (0);
}
