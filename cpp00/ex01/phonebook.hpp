/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:24:41 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/22 16:22:20 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"
# include <iostream>

class Phonebook
{
	private:
		Contact contactos[8];
		int		i;
	public:
		Phonebook(void);
		~Phonebook(void);

		void	add();
		void	search();
		void	print_contact(std::string str);
};

#endif