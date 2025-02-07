/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:51:24 by egomez-g          #+#    #+#             */
/*   Updated: 2024/02/27 18:36:54 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	replace(char **argv, std::string str)
{
	std::ofstream	outfile;
	int				pos;
	int				i;

	outfile.open((std::string(argv[1]) + ".replace").c_str());
	if (outfile.fail())
		return (1);
	i = 0;
	while (i < (int)str.size())
	{
		pos = str.find(argv[2], i);
		if (pos != -1 && pos == i)
		{
			outfile << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			outfile << str[i];
		i++;
	}
	outfile.close();
	return (0);
}

int	main(int argc, char **argv)
{
	char			c;
	std::ifstream	infile;
	std::string		str;

	if (argc != 4)
	{
		std::cout << "Error: bad input\n";
		return (1);
	}
	infile.open(argv[1]);
	if (infile.fail())
	{
		std::cout << "Error: no such file or directory" << std::endl;
		return (1);
	}
	while(!infile.eof() && infile >> std::noskipws >> c)
		str += c;
	infile.close();
	return (replace(argv, str));
}