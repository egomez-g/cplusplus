/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:19:38 by ysoroko           #+#    #+#             */
/*   Updated: 2024/03/04 15:07:49 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string	*ideas;
	public:
		Brain();
		~Brain();
		Brain(Brain &ref);
		Brain & operator=(Brain const &rhs);
		std::string *getIdeas();

};

#endif