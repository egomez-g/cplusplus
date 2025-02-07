/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:12:23 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/27 14:15:33 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int	i;
	Zombie *horde_zombies = new Zombie[N]();

	i = 0;
	while (i < N)
	{
		horde_zombies[i].set_name(name);
		i++;
	}	
	return (horde_zombies);
}