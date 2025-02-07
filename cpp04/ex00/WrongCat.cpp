/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:38:27 by egomez-g          #+#    #+#             */
/*   Updated: 2024/03/04 14:38:27 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "wrong cat";
	std::cout << "A wrong cat was constructed\n";
}

WrongCat::~WrongCat()
{
	std::cout << "A wrong cat was destroyed\n";
}

WrongCat::WrongCat(WrongCat &ref)
{
	this->type = ref.getType();
	std::cout << "A cat was constructed from copy\n";
}

WrongCat & WrongCat::operator=(WrongCat const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Fake meow meow\n";
}