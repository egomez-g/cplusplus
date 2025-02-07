/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:41:40 by ysoroko           #+#    #+#             */
/*   Updated: 2024/03/07 11:36:38 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	private:
		std::string	type;
		Brain		*brain;

	public:
		Dog();
		~Dog();
		Dog(Dog & ref);
		Dog & operator=(Dog const & rhs);
		void makeSound() const;
		std::string getType( void ) const;
		Brain *getBrain( void ) const;
		void compareTo(Dog const & other_dog) const;
};

#endif