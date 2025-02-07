/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:35:16 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/27 16:25:32 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
	private:
		std::string type_weapon;
	public:
		Weapon();
		Weapon(std::string name);
		~Weapon();

		void		setType(std::string type);
		std::string	getType();
};


#endif