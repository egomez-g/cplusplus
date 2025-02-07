/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 11:47:42 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/21 11:50:10 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	j = 0;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argc > 1 && argv && argv[j])
	{
		i = 0;
		while (j > 0 && argv[j][i])
		{
			std::cout << (char)std::toupper(argv[j][i]);
			i++;
		}
		j++;
	}
	std::cout << std::endl;
	return (0);
}
