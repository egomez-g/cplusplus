/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:40:20 by ysoroko           #+#    #+#             */
/*   Updated: 2024/03/07 11:36:10 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	protected:
		std::string	type;
	public:
		AAnimal();
		virtual ~AAnimal() = 0;
		AAnimal(const AAnimal & ref);
		AAnimal & operator=(AAnimal const & rhs);
		virtual std::string getType( void ) const;
		virtual void makeSound() const = 0;
};

#endif