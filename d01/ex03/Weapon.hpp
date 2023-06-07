/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:55:04 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/07 12:17:53 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string m_type;
    
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        const std::string &getType();
        void              setType(std::string type);
};
#endif