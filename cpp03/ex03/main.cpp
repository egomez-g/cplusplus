/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:08:15 by egomez-g          #+#    #+#             */
/*   Updated: 2024/03/02 16:23:29 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a;
	DiamondTrap b("Manolo");
	DiamondTrap c(a);

	a.whoAmI();
	a.attack("some super random dude");
	b.whoAmI();
	b.attack("Chadd-clone");
	c.whoAmI();

	return (0);
}
