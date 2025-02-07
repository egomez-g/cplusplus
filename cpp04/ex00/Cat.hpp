/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:42:29 by ysoroko           #+#    #+#             */
/*   Updated: 2024/03/04 15:04:07 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	private:
		std::string	type;

	public:
		Cat();
		~Cat();
		Cat(Cat & ref);
		Cat & operator=(Cat const &rhs);
		void makeSound() const;
		std::string getType(void) const;
};

#endif