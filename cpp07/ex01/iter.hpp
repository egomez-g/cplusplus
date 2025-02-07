/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:47:41 by egomez-g          #+#    #+#             */
/*   Updated: 2024/05/08 16:47:56 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <cstddef>

template<typename T>
void iter(T* arr, std::size_t lenght, void (*f)(const T&)) {
	for (std::size_t i = 0; i < lenght; ++i) {
		f(arr[i]);
	}
}
