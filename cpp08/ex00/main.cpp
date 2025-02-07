/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <egomez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:30:23 by egomez-g          #+#    #+#             */
/*   Updated: 2024/05/13 16:36:39 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>

int main(int ac, char ** av)
{
    if (ac != 2)
        return 1;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::vector<int>  vect(arr, arr + sizeof(arr) / sizeof(int));
    std::list<int>    list(arr, arr + sizeof(arr) / sizeof(int));

    easyfind(vect, std::atoi(av[1]));
    easyfind(list, std::atoi(av[1]));

    return 0;
}