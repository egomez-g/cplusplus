/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:35:45 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/28 11:41:52 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon	&_weapon;
public:
	HumanA(std::string name, Weapon &wep);
	~HumanA();
	
	void	attack();
};

#endif