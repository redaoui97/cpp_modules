/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:01:51 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/07 12:08:41 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A

#include <iostream>
#include "Weapon.hpp"

class   HumanA
{
    private:
        std::string m_name;
        Weapon      m_weapon;

    public:
        HumanA(std::string name, Weapon weapon);
        ~HumanA();
        void    attack();    
};

#endif