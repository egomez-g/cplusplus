/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:33:00 by egomez-g          #+#    #+#             */
/*   Updated: 2024/05/13 16:38:34 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>
void    easyfind(T& container, int value)
{
    if (std::find(container.begin(), container.end(), value) != container.end())
        std::cout << "Found." << std::endl;
    else
        std::cout << "Not found." << std::endl;
}