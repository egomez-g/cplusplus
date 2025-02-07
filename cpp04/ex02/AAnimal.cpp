/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:34:18 by ysoroko           #+#    #+#             */
/*   Updated: 2024/03/04 14:38:42 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "Aanimal";
	std::cout << "AAnimal was constructed\n";
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal was destroyed\n";
}

AAnimal::AAnimal(AAnimal const & ref)
{
	this->type = ref.getType();
	std::cout << "AAnimal was constructed from a copy\n";
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	this->type = rhs.getType();
	return (*this);
}

void AAnimal::makeSound() const
{
	std::cout << "... generic animal sound ...\n";
}

std::string AAnimal::getType( void ) const
{
	return (this->type);
}