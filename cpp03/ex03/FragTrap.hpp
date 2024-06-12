/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:22:50 by egomez-g          #+#    #+#             */
/*   Updated: 2024/03/02 16:21:22 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string name);

		virtual ~FragTrap();

		void highFiveGuys(void);
};

#endif
