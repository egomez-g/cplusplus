/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:35:34 by egomez-g          #+#    #+#             */
/*   Updated: 2024/05/08 16:14:02 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <string>


class Scalar {
	public:
		~Scalar();

		static void convert(const std::string& literal);
	private:
		Scalar();
		Scalar(const Scalar& other);
		Scalar& operator=(const Scalar& other);

		//static bool tryChar(const std::string& literal);
		//static bool tryInt(const std::string& literal);
		//static bool tryFloat(const std::string& literal);
		//static bool tryDouble(const std::string& literal);
};