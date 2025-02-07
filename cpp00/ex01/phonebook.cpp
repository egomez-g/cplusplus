/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:35:13 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/26 12:02:18 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	this->i = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::add(void)
{
	std::string aux;
	int			flag;

	flag = 1;
	while (flag)
	{
		std::cout << "Enter the first name\n";
		std::cin >> aux;
		if (aux.compare("") != 0)
		{
			this->contactos[i % 8].set_first_name(aux);	
			flag = 0;
		}
	}
	flag = 1;
	while (flag)
	{
		std::cout << "Enter the last name\n";
		std::cin >> aux;
		if (aux.compare("") != 0)
		{
			this->contactos[i % 8].set_last_name(aux);	
			flag = 0;
		}
	}
	flag = 1;
	while (flag)
	{
		std::cout << "Enter the nickname\n";
		std::cin >> aux;
		if (aux.compare("") != 0)
		{
			this->contactos[i % 8].set_nickname(aux);	
			flag = 0;
		}
	}
	flag = 1;
	while (flag)
	{
		std::cout << "Enter the phone number\n";
		std::cin >> aux;
		if (aux.compare("") != 0)
		{
			this->contactos[i % 8].set_phone_number(aux);	
			flag = 0;
		}
	}
	flag = 1;
	while (flag)
	{
		std::cout << "Enter the darkest secret\n";
		std::cin >> aux;
		if (aux.compare("") != 0)
		{
			this->contactos[i % 8].set_darkest_secret(aux);	
			flag = 0;
		}
	}
	flag = 1;
	
	this->i++;
}

void	Phonebook::print_contact(std::string str)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (str[i])
		{
			if (i == 10 && str[i + 1])
				std::cout << ".";
			else
				std::cout << str[i];
		}
		else
			std::cout << " ";
		i++;
	}
	std::cout << "|";
}

void	Phonebook::search()
{
	int	i;
	std::string aux;
	int	flag;

	std::cout << "INDEX     |FIRST NAME|LAST NAME |NICKNAME  |\n";
	i = 0;
	while (i < this->i)
	{
		std::cout << &index << "         |";
		print_contact(contactos[i].get_first_name());
		print_contact(contactos[i].get_last_name());
		print_contact(contactos[i].get_nickname());
		std::cout << "\n";
		i++;
		if (i > 7)
			i = this->i + 1;
	}
	flag = 1;
	while (flag)
	{
		std::cout << "say index\n";
		std::cin >> aux;
		i = atoi(aux.c_str());
		if (i > 0 && i < 9 && i < this->i + 1)
			flag = 0;
	}
	std::cout << "Index: " << i << "\n";
	std::cout << "First name: " << contactos[i - 1].get_first_name() << "\n";
	std::cout << "Last name: " << contactos[i - 1].get_last_name() << "\n";
	std::cout << "Nickname: " << contactos[i - 1].get_nickname() << "\n";
	std::cout << "Phone number: " << contactos[i - 1].get_phone_number() << "\n";
	std::cout << "Darkest secret: " << contactos[i - 1].get_darkest_secret() << "\n";
}
