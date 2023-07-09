/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:59:54 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/09 01:21:56 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

#define DEFAULT_ENERGYPOINTS 50
#define DEFAULT_ATTACKDAMAGE 20
#define DEFAULT_ACTION_COST  1
#define DEFAULT_REPAIR       10
#define DEFAULT_HITPOINTS    100

class ScavTrap : public ClapTrap
{
    private:

    public:
        /*constructors; destructors*/
        ScavTrap();
        ScavTrap(const std::string name);
        ScavTrap(const ClapTrap& copy);
        ~ScavTrap();
        /*public methods*/
        bool        isDead();
        void        attack(const std::string& target);
        void        guardGate();
};
#endif