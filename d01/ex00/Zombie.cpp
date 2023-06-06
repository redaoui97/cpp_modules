/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:28:44 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/06 19:48:53 by rnabil           ###   ########.fr       */
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