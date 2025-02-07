/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:32:49 by egomez-g          #+#    #+#             */
/*   Updated: 2024/06/03 12:59:58 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_BITCOINEXCHANGE_HPP_
#define EX00_BITCOINEXCHANGE_HPP_

#include <string>
#include <map>

class BitcoinExchange {
	private:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &rhs);

		std::map<std::string, double> data_;
		double GetExchangeRate(const std::string &date);
		bool ValidateDate(const std::string &date);
		bool ValidateValue(const double &value);
	public:
		BitcoinExchange(const std::string &filename);
		void ProcessInput(const std::string &filename);
};

#endif
