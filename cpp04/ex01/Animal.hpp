/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:40:20 by ysoroko           #+#    #+#             */
/*   Updated: 2024/03/07 11:35:35 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	type;

	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &ref);
		Animal & operator=(Animal const &rhs);

		virtual std::string getType(void) const;
		virtual void makeSound() const;
};

#endif