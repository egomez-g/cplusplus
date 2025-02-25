/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:15:33 by egomez-g          #+#    #+#             */
/*   Updated: 2024/06/03 14:19:10 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <ctime>

#include "PmergeMe.hpp"

namespace {

template <class T>
void print_okey(const T &c)
{
	typedef typename T::const_iterator const_iterator;

	const_iterator prev = c.begin();
	const_iterator it = c.begin() + 1;
	for (; it != c.end(); ++it) {
		if (*prev > *it) {
			std::cout << "KO :(" << std::endl;
			return;
		}
	}
	std::cout << "OK." << std::endl;
}

template <class T>
void print_container(const std::string &mesg, const T &c)
{
	typedef typename T::const_iterator const_iterator;

	std::cout << mesg;
	for (const_iterator it = c.begin(); it != c.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template <class T>
double bench_container(T &c)
{
	std::clock_t start = std::clock();
	PmergeMe::process(c);
	std::clock_t end = std::clock();
	double elapsed = 1000000.0 * (end - start) / CLOCKS_PER_SEC;
	return elapsed;
}

} // namespace

int main(int argc, char *argv[])
{
	if (argc < 2) {
		std::cout << "Error: No arguments provided.\n";
		return 1;
	}

	std::vector<int> v;
	std::deque<int> d;

	for (int i = 1; i < argc; ++i) {
		std::stringstream ss(argv[i]);
		int num;
		if (!(ss >> num) || !ss.eof()) {
			std::cout << "Error: Invalid input.\n";
			return 1;
		}
		if (num < 0) {
			std::cout << "Error: Negative numbers are not allowed.\n";
			return 1;
		}
		v.push_back(num);
		d.push_back(num);
	}

	print_container("Before: ", v);

	double time_vector = bench_container(v);
	double time_deque = bench_container(d);

	print_container("After: ", v);

	std::cout << "Time to process a range of "
	          << v.size()
	          << " elements with std::vector : "
	          << time_vector
	          << " us\n";

	std::cout << "Time to process a range of "
	          << d.size()
	          << " elements with std::deque : "
	          << time_deque
	          << " us\n";

	print_okey(v);

	return 0;
}