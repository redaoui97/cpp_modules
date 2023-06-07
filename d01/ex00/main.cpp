/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:18:30 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/07 10:38:17 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *test;
    Zombie  testMain("Zombie1");

    /*testing the Zombie that is declared above*/
    testMain.announce();
    
    /*testing the newZombie that allocates on the heap*/
    test = newZombie("Zombie2");
    
    /*testing randomChump that allocates on the stack*/
    randomChump("Zombie3");
    
    /*Destructing the first Zombie*/
    delete test;

    /*The zombie declared on main is destroyed before program stop*/
    return (0);
}