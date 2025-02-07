/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:55:27 by egomez-g          #+#    #+#             */
/*   Updated: 2024/03/03 12:27:02 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

harl::harl()
{
}

harl::~harl()
{
}

void	harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void	harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	harl::complain(std::string level)
{
	void		(harl::*ptr_complain[4])(void) = {&harl::debug, &harl::info, &harl::warning, &harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
		{
			(this->*ptr_complain[i])();
			break ;
		}
		i++;
	}
}