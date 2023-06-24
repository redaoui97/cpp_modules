/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:54:06 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/24 16:35:35 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string m_name;
        int         m_hitPoints     = 10;
        int         m_energyPoints  = 10;
        int         m_attackDamage  = 0;
        
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

