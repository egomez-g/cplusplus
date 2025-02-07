/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:36:06 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/28 11:52:04 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon	*_weapon;
public:
	HumanB();
	HumanB(std::string name);
	~HumanB();
	
	void	attack();
	void	setWeapon(Weapon &wep);
};

#endif