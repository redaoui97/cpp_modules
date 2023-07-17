/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:02:37 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/17 15:31:02 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string m_type;
    public:
        /*constructors*/
        Animal();
        Animal(const std::string type);
        Animal(const Animal& copy);
        /*assignement operator*/
        Animal& operator=(const Animal& copy);
        /*destructor*/
        virtual ~Animal();
        /*methods*/
        std::string     getType(void) const;
        virtual void    makeSound(void) const = 0;
};

#endif