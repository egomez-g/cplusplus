/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:18:52 by egomez-g          #+#    #+#             */
/*   Updated: 2024/05/14 14:20:08 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data {
	int n;
};

uintptr_t serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main() {
	Data* data;
	uintptr_t rawData;
	Data* retData;

	data = new Data;

    data->n = 5;
    std::cout << "number           : " << data->n << std::endl;
	std::cout << "Data             : " << data << std::endl;
	rawData = serialize(data);
	std::cout << "Raw data         : " << rawData << std::endl;
	retData = deserialize(rawData);
	std::cout << "Deserialized data: " << retData << std::endl;
    std::cout << "number           : " << data->n << std::endl;

	delete data;

	return 0;
}