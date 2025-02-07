/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:39:30 by egomez-g          #+#    #+#             */
/*   Updated: 2024/05/13 17:36:29 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <math.h>

std::vector<int>	range(int start, int end, int increase){
	std::vector<int> ret;
	if ( start < 0)
	{
		start = abs(start);
		if (end > 0)
			end *= -1;
	}
	if (end < 0)
	{
		for (int i = start; i > end; i -= increase)
		{
			ret.push_back(i);
		}
	}
	else
	{
		for (int i = start; i < end; i += increase)
		{
			ret.push_back(i);
		}
	}
	return ret;
}

int main()
{
{
	Span sp = Span(16);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
{
	Span sp(100);
	std::vector<int> extra = range(10, 100, 1);
	sp.addNumber(extra.begin(), extra.end());
}
{
	Span sp(100);
	std::vector<int> extra = range(-100, 100, 1);
	try {
		sp.addNumber(extra.begin(), extra.end());
	}
	catch ( const std::exception &e){
		std::cout << "fails try (-100, 100) array fits sp(100)" << std::endl;
	}
}
	return  0;
}