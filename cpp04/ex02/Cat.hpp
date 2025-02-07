/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:42:29 by ysoroko           #+#    #+#             */
/*   Updated: 2024/03/07 11:36:27 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	private:
		std::string	type;
		Brain		*brain;

	public:
		Cat();
		~Cat();
		Cat(Cat & ref);
		Cat & operator=(Cat const & rhs);
		void makeSound() const;
		std::string getType( void ) const;
		Brain *getBrain( void ) const;
		void compareTo(Cat const & other_cat) const;
};

#endif