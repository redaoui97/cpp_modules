/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:59:33 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/07 22:11:45 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*constructors; destructors*/
ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Dafault constructor called  on ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    std::cout << "Parametrized constructor called  on ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ClapTrap& copy) : ClapTrap(copy)
{
    std::cout << "Copy constructor called  on ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called on ScavTrap" << std::endl;
}

/*public methods*/
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