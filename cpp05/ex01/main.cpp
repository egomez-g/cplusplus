/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:40:06 by egomez-g          #+#    #+#             */
/*   Updated: 2024/04/10 19:07:57 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form form("wrongForm", 0, 0);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Form form("wrongForm", 2000, 0);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl << std::endl;
    }
	try {
        Bureaucrat paco("Paco", 11);
        Form form("formName", 10, 0);

        paco.signForm(&form);
        std::cout << std::endl;
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat juan("Juan", 9);
        Form form("form2", 123, 0);

        juan.signForm(&form);
        std::cout << form << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	return (0);
}