/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:45:48 by egomez-g          #+#    #+#             */
/*   Updated: 2024/05/08 16:46:23 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void swap(T& a, T& b) {
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}
template<typename T>

const T& max(const T& x, const T& y) {
	if (x > y) return x;
	return y;
}

template<typename T>
const T& min(const T& x, const T& y) {
	if (x < y) return x;
	return y;
}