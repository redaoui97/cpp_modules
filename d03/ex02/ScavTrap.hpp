/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:59:54 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/09 01:34:35 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        /*constructors; destructors*/
        ScavTrap();
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap& copy);
        ~ScavTrap();
        /*public methods*/
        bool        isDead();
        void        attack(const std::string& target);
        void        guardGate();
};
#endif