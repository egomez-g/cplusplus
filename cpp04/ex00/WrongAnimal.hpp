/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:38:20 by egomez-g          #+#    #+#             */
/*   Updated: 2024/03/04 14:38:20 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal &ref);
		WrongAnimal & operator=(WrongAnimal const &rhs);

		void makeSound() const;
		std::string getType(void) const;
};

#endif