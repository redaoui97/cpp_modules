/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:05:28 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/24 18:55:47 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    A("A");
    ClapTrap    B("B");
    int         i;
    
    /*In this scenario, A keeps attacking B, and B keeps repairing itself
      until it runs out of energy points*/
    i = 0;
    while (i < DEFAULT_ENERGYPOINTS)
    {
        A.attack("B");
        B.takeDamage(DEFAULT_ATTACKDAMAGE);
        B.beRepaired(DEFAULT_ATTACKDAMAGE);
        std::cout << std::endl << std::endl;
        i++;
    }
    return (0);
}