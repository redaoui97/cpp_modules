/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:59:33 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/09 01:25:52 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*constructors; destructors*/
ScavTrap::ScavTrap() : ClapTrap()
{
    this->m_hitPoints = 100;
    this->m_energyPoints = 50;
    this->m_attackDamage = 20;
    std::cout << "Dafault constructor called on ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    this->m_hitPoints = 100;
    this->m_energyPoints = 50;
    this->m_attackDamage = 20;
    std::cout << "Parametrized constructor called on ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ClapTrap& copy) : ClapTrap(copy)
{
    std::cout << "Copy constructor called on ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called on ScavTrap" << std::endl;
}

/*public methods*/
bool    ScavTrap::isDead()
{
    return (this->m_hitPoints <= 0 ? true : false);
}

void        ScavTrap::attack(const std::string& target)
{
    if (!this->m_energyPoints)
        std::cout << this->m_name << " has no energy points to attack " << target << "!" << std::endl;
    else
    {
        this->m_energyPoints--;
        std::cout << "ClapTrap " << this->m_name << " has attacked, " << target << " causing " << this->m_attackDamage << " points of damage!" << std::endl;
    }
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
