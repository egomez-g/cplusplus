/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:06:09 by ysoroko           #+#    #+#             */
/*   Updated: 2024/03/04 15:04:13 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "A dog was constructed\n";
}

Dog::~Dog()
{
	std::cout << "A dog was destroyed\n";
}

Dog::Dog(Dog & ref)
{
	this->type = ref.getType();
	std::cout << "A dog was constructed from copy\n";
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof woof\n";
}

std::string Dog::getType(void) const
{
	return (this->type);
}
