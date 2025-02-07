/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:36:26 by egomez-g          #+#    #+#             */
/*   Updated: 2024/03/04 14:36:26 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main( void )
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;

	delete dog;
	delete cat;
	std::cout << std::endl;
	std::cout << std::endl;

	Dog paco;
	Cat manolo;

	Dog & paco_ref = paco;
	Cat & manolo_ref = manolo;

	std::cout << std::endl << "creating copies" << std::endl;
	Dog paco_copy(paco_ref);
	Cat manolo_copy(manolo_ref);

	Dog & paco_copy_ref = paco_copy;
	Cat & manolo_copy_ref = manolo_copy;

	std::cout << std::endl << "comparing" << std::endl;
	paco.compareTo(paco_copy_ref);
	manolo.compareTo(manolo_copy_ref);
	std::cout << std::endl;

	const Animal	*(animal_array[4]);
	std::cout << std::endl;

	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;

	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << std::endl;

	//const Animal *a = new Animal();

	return (0);
}
