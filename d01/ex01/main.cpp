/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:59:23 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/07 11:31:52 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombies;
    int     N;
    int     i;
    
    i = 0;
    N = 5;
    zombies = zombieHorde(N, "zombie");
    while (i < N)
    {
        zombies[i].announce();
        i++;
    }
    delete[] zombies;
    return (0);
}