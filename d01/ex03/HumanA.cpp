/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:05:31 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/07 13:29:53 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*Constructors(parametrized) and deconstructor*/
HumanA::HumanA(std::string name, Weapon& weapon) : m_name(name), m_weapon(weapon)
{
    
}

HumanA::~HumanA()
{
    
}

void    HumanA::attack()
{
    std::cout << this->m_name << " attackes with their " << this->m_weapon.getType() << std::endl;
}