/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:11:01 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/27 16:19:30 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "";
}
Zombie::~Zombie(void)
{
	std::cout << "[" << _name << "]: died!" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << "[" << _name << "]: BraiiiiiiinnnzzzZ..." << std::endl;
}