/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:11:55 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/07 13:39:43 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
# define HUMAN_B

#include <iostream>
#include "Weapon.hpp"

class   HumanB
{
    private:
        std::string m_name;
        Weapon      *m_weapon;

    public:
        HumanB(std::string name);
        ~HumanB();
        void    attack(); 
        void    setWeapon(Weapon &weapon);
};

#endif