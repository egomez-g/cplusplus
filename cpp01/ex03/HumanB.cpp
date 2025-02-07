/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:36:31 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/28 11:52:17 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::~HumanB()
{
}

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

void	HumanB::setWeapon(Weapon &wep)
{
	this->_weapon = &wep;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
