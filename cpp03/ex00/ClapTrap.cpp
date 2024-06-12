/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:08:13 by egomez-g          #+#    #+#             */
/*   Updated: 2024/03/02 11:53:49 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Constructor called\n";
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	*this = copy;
	std::cout << "Copy constructor called\n";
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap Constructor for the name " << name << " called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->hitPoints || !this->energyPoints)
	{
		std::cout << "No hitpoints or energy left\n";
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->hitPoints || !this->energyPoints)
	{
		std::cout << "No hitpoints or energy left\n";
		return ;
	}
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->hitPoints || !this->energyPoints)
	{
		std::cout << "No hitpoints or energy left\n";
		return ;
	}
	this->hitPoints += amount;
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " repaired " << amount << " hitpoints" << std::endl;
}
