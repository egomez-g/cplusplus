/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:08:46 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/28 17:30:34 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <math.h>

class Fixed
{
	private:
		int	_num;
		static const int _bits = 8;

	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();

		Fixed &operator=(const Fixed &src);

		int		getRawBits(void)const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void)const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);

#endif