/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:16:23 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/07 12:22:05 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*Constructors(default and parameterized) and deconstructor*/
Weapon::Weapon()
{
    
}

Weapon::Weapon(std::string type)
{
    this->m_type = type;
}

Weapon::~Weapon()
{
    
}

/*Member functions: methods*/

const std::string &Weapon::getType()
{
    std::string const &type = this->m_type;
    
    return (type);
}

void    Weapon::setType(std::string type)
{
    this->m_type = type;
}