/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:59:54 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/07 19:41:27 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

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
        void        attack(const std::string& target);
};
#endif