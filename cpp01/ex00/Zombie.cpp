/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:11:01 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/27 13:05:05 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name)
{
	_name = name;
}
Zombie::~Zombie(void)
{
	std::cout << "[" << _name << "]: Me muerooo!" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "[" << _name << "]: BraiiiiiiinnnzzzZ..." << std::endl;
}