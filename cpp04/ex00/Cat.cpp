/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:49:14 by ysoroko           #+#    #+#             */
/*   Updated: 2024/03/04 15:03:55 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "A cat was constructed\n";
}

Cat::~Cat()
{
	std::cout << "A cat was destroyed\n";
}

Cat::Cat(Cat & ref)
{
	this->type = ref.getType();
	std::cout << "A cat was constructed from copy\n";
}

Cat & Cat::operator=(Cat const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow meow\n";
}

std::string Cat::getType(void) const
{
	return (this->type);
}