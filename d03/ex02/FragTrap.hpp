/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 01:30:23 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/09 01:48:54 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"

#define DEFAULT_ENERGYPOINTS 100
#define DEFAULT_ATTACKDAMAGE 30
#define DEFAULT_ACTION_COST  1
#define DEFAULT_REPAIR       10
#define DEFAULT_HITPOINTS    100

class FragTrap : public ClapTrap
{
    public:
        /*constructors; destructors*/
        FragTrap();
        FragTrap(const std::string name);
        FragTrap(const FragTrap& copy);
        ~FragTrap();
        /*public methods*/
        bool        isDead();
        void        attack(const std::string& target);
        void        highFivesGuys(void);
};
    
#endif