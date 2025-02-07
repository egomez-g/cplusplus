/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:34:56 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/27 16:26:24 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string name)
{
	type_weapon = name;
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string type)
{
	this->type_weapon = type;
}

std::string	Weapon::getType()
{
	return (this->type_weapon);	
}