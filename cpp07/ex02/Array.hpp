/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:49:54 by egomez-g          #+#    #+#             */
/*   Updated: 2024/05/24 11:42:26 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <cstddef>
# include <exception>
# include <math.h>

template <typename T>
class Array {
	public:
		Array() : _head(NULL), _size(0) {}
		Array(unsigned int size) : _head(new T[size]), _size(size) {}
		Array(const Array& other) :_head(NULL) {
			*this = other;
		}
		~Array() {
			delete[] this->_head;
		}

		Array& operator=(const Array& other) {
			if (this == &other) return *this;
			if (this->_size != other._size) {
				if (this->_head != NULL) delete[] this->_head;
				this->_head = new T[other._size];
				this->_size = other.size();
			}
			for (std::size_t i = 0; i < this->_size; ++i) {
				this->_head[i] = other[i];
			}
			return *this;
		}

		T& operator[](std::size_t index) {
			if (index >= this->_size || index < 0) throw Array::InvalidIndexException();
			else return this->_head[index];
		}
		const T& operator[](std::size_t index) const {
			if (index >= this->_size || index < 0) throw Array::InvalidIndexException();
			else return this->_head[index];
		}

		std::size_t size() const {
			return this->_size;
		}
	private:
		T* _head;
		std::size_t _size;
	public:
		class InvalidIndexException : public std::exception {
			public: virtual const char* what() const throw() {
				return "Invidalid index: index is either bigger than size or less than 0";
			}
		};
};