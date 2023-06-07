/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:14:37 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/07 13:39:47 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*Constructors(parametrized) and deconstructor*/
HumanB::HumanB(std::string name)
{
    this->m_name = name;
}

HumanB::~HumanB()
{
    
}

void    HumanB::attack()
{
    std::cout << this->m_name << " attackes with their " << this->m_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->m_weapon = &weapon;
}