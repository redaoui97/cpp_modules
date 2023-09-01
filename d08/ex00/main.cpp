/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:12:12 by rnabil            #+#    #+#             */
/*   Updated: 2023/09/01 16:40:19 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    int intArr[] = {1, 4, 2, 10, 0};
    std::vector<int> container(intArr, intArr + 5);
    std::vector<int> container2(container.begin(), container.end());
    
    std::cout << "content of both vectors: " << std::endl;
    for (int i = 0; i < static_cast<int>(container2.size()); i++)
    {
        std::cout << container.at(i) << " : " << container2.at(i) << std::endl;
    }
    //Try to find value in containers
    try
    {
        easyfind(container, 10);   
        easyfind(container2, 98);   
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error found: " << e.what() << '\n';
    }
    return (0);
}