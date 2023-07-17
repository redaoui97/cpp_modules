/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 01:29:53 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/17 06:17:22 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->m_hitPoints = 100;
    this->m_energyPoints = 100;
    this->m_attackDamage = 30;
    std::cout << "Default constructor called on FragTrap" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    this->m_hitPoints = 100;
    this->m_energyPoints = 100;
    this->m_attackDamage = 30;
    std::cout << "Parametried constructor called on FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    std::cout << "Copy constructor called on FragTrap" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor caleld on FragTrap" << std::endl;
}

/*copy assignement operator*/
FragTrap&   FragTrap::operator=(const FragTrap& copy)
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
bool    FragTrap::isDead()
{
    return (this->m_hitPoints <= 0 ? true : false);
}

void        FragTrap::attack(const std::string& target)
{
    if (!this->m_energyPoints)
        std::cout << this->m_name << " has no energy points to attack " << target << "!" << std::endl;
    else
    {
        this->m_energyPoints--;
        std::cout << "ClapTrap " << this->m_name << " has attacked, " << target << " causing " << this->m_attackDamage << " points of damage!" << std::endl;
    }
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << this->m_name << " wants to high five!" << std::endl;
}