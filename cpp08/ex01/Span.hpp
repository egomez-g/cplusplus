/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:45:43 by egomez-g          #+#    #+#             */
/*   Updated: 2024/05/13 17:30:48 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>

class Span{
public:
	Span(unsigned int);
	Span(Span const &);
	Span &operator=(Span const &);
	~Span();

	void	addNumber(int);
	void	addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
	class maxsizereached: public std::exception{
	public: const char * what() const throw(){
		return "Vector is full"; }
	};

	int	shortestSpan();
	int	longestSpan();
	class notfound: public std::exception{
	public: const char * what() const throw(){
		return "Element is not found"; }
	};

	int	maxnumber();
	int	minnumber();

private:
	std::vector<int>	_arr;
	long unsigned int	_size;
};