/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:25:14 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/06 19:01:37 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private:
        std::string m_name;
        
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void    announce();
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif