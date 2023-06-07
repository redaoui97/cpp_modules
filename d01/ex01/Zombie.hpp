/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:41:12 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/07 11:25:34 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string m_name;
        
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void    announce();
        void    setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif