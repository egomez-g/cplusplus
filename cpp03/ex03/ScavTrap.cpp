/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:56:58 by egomez-g          #+#    #+#             */
/*   Updated: 2024/03/02 14:09:22 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->guardingGate = false;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->guardingGate = false;
	std::cout << "ScavTrap Constructor for the name " << this->name << " called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Deconstructor for " << this->name << " called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else if (this->energyPoints == 0)
		std::cout << "ScavTrap " << this->name << " is not able to attack " << target << ", because he has no energy points left" << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " is not able to attack " << target << ", because he has not enough hit points" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->guardingGate == false)
	{
		this->guardingGate = true;
		std::cout << "ScavTrap " << this->name << " is now guarding the gate." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " is already guarding the gate" << std::endl;
}
