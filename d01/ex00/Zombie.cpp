/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:28:44 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/05 18:33:41 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    
}

Zombie::~Zombie()
{
    
}

void    Zombie::announce()
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
