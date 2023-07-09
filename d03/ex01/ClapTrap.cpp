/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:22:37 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/09 01:19:47 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*constructors; destructors*/
ClapTrap::ClapTrap() 
{
    this->m_attackDamage = 0;
    this->m_energyPoints = 10;
    this->m_hitPoints    = 10;
    std::cout << "Dafault constructor called  on ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
{
    std::cout << "Parametrized constructor called  on ClapTrap" << std::endl;
    this->m_name = name;
    this->m_attackDamage = 0;
    this->m_energyPoints = 10;
    this->m_hitPoints    = 10;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy constructor called  on ClapTrap" << std::endl;
    this->m_name = copy.m_name;
    this->m_hitPoints = copy.m_hitPoints;
    this->m_energyPoints = copy.m_energyPoints;
    this->m_attackDamage = copy.m_attackDamage;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called on ClapTrap" << std::endl;
}

/*copy assignement operator*/
ClapTrap&   ClapTrap::operator=(const ClapTrap& copy)
{
    std::cout << "copy assignement operator called" << std::endl;
    if (this != &copy)
    {
        this->m_name = copy.m_name;
        this->m_hitPoints = copy.m_hitPoints;
        this->m_energyPoints = copy.m_energyPoints;
        this->m_attackDamage = copy.m_attackDamage;
    }
    return (*this);
}

/*public methods*/
void        ClapTrap::attack(const std::string& target)
{
    if (!this->m_energyPoints)
        std::cout << this->m_name << " has no energy points to attack " << target << "!" << std::endl;
    else
    {
        this->m_energyPoints--;
        std::cout << "ClapTrap " << this->m_name << " has attacked, " << target << " causing " << this->m_attackDamage << " points of damage!" << std::endl;
    }
}

void        ClapTrap::takeDamage(unsigned int amount)
{
    if (this->m_hitPoints <= 0)
        std::cout << this->m_name << " doesn't have any hitpoints!" << std::endl;
    else
    {
        this->m_hitPoints -= amount;
        std::cout << this->m_name << " has taken " << amount << " damage, and now has " << this->m_hitPoints << " hit points left!" << std::endl;   
    }
}
void        ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->m_energyPoints)
        std::cout << this->m_name << " has ran out of energy points and cannot be repaired!" << std::endl;
    else if (this->m_hitPoints <= 0)
        std::cout << this->m_name << " is dead and cannot be repaired!" << std::endl;
    else
    {
        this->m_hitPoints += amount;
        this->m_energyPoints--;
        std::cout << this->m_name << " has repaired " << amount << " and now has " << this->m_hitPoints << " hit points!" << std::endl;
    }
}