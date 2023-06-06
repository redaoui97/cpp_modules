/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:18:30 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/06 19:56:09 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *test;

    /*testing the newZombie that allocates on the heap*/
    test = newZombie("ZombieTestHeap");
    delete test;
    
    /*testing randomChump that allocates on the stack*/
    randomChump("ZombieTestStack");
    return (0);
}