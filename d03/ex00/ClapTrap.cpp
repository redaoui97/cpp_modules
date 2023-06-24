/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:22:37 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/24 16:39:53 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.hpp"

/*constructors; destructors*/
ClapTrap::ClapTrap() 
{
    
}

ClapTrap::ClapTrap(const std::string name)
{
    this->m_name = name;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    this->m_hitPoints = copy.m_hitPoints;
    this->m_energyPoints = copy.m_energyPoints;
    this->m_attackDamage = copy.m_attackDamage;
}

ClapTrap::~ClapTrap()
{
    
}

/*copy assignement operator*/
ClapTrap&   ClapTrap::operator=(const ClapTrap& copy)
{
    if (this != &copy)
    {
        this->m_hitPoints = copy.m_hitPoints;
        this->m_energyPoints = copy.m_energyPoints;
        this->m_attackDamage = copy.m_attackDamage;
    }
    return (*this);
}

/*public methods*/
void        attack(const std::string& target);
void        takeDamage(unsigned int amount);
void        beRepaired(unsigned int amount);