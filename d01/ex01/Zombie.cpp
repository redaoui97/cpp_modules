/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:41:08 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/07 11:27:21 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*Constructors(default; parameterized) - Deconstructor*/
Zombie::Zombie()
{
    
}

Zombie::Zombie(std::string name)
{
    this->m_name = name; 
}

Zombie::~Zombie()
{
    std::cout << this->m_name << " down!" << std::endl;
}

/*Member methods*/
void    Zombie::announce()
{
    std::cout << this->m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->m_name = name;
}