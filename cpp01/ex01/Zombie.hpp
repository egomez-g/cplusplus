/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:10:44 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/27 14:19:03 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class	Zombie
{
	private:
		std::string	_name;
	public:
		Zombie();
		~Zombie(void);

		void	set_name(std::string name);
		void	announce(void);
};

Zombie*	newZombie(std::string name);
Zombie*	zombieHorde(int N, std::string name);

#endif