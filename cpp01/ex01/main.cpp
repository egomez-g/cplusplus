/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:10:02 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/27 14:25:32 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *horde;
	int		i;

	horde = zombieHorde(5, "manolo");
	i = 0;
	while (i < 5)
	{
		horde[i].announce();
		i++;
	}
	delete[] (horde);
	return (0);
}
