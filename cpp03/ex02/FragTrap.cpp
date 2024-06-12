/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:22:55 by egomez-g          #+#    #+#             */
/*   Updated: 2024/03/02 15:26:54 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap Constructor for the name " << this->name << " called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Deconstructor for " << this->name << " called" << std::endl;
}
void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->name << ": high five?\nThere we go." << std::endl;
}