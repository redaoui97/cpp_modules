/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:54:06 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/07 22:11:23 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

#define DEFAULT_HITPOINTS 10
#define DEFAULT_ENERGYPOINTS 10
#define DEFAULT_ATTACKDAMAGE 0

class ClapTrap
{
    protected:
        std::string m_name;
        int         m_hitPoints;
        int         m_energyPoints;
        int         m_attackDamage;
        
    public:
        /*constructors; destructors*/
        ClapTrap();
        ClapTrap(const std::string name);
        ClapTrap(const ClapTrap& copy);
        ~ClapTrap();
        /*copy assignement operator*/
        ClapTrap&   operator=(const ClapTrap& copy);
        /*public methods*/
        void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
};
#endif

