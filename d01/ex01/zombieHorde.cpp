/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:44:07 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/07 11:32:19 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int         i;
    Zombie      *zombieArray;
    std::string sheet;
    
    i = 0;
    zombieArray = new Zombie[N];
    while (i < N)
    {
        sheet = name + std::to_string(i + 1);
        zombieArray[i].setName(sheet);
        i++;
    }
    return (zombieArray);
}