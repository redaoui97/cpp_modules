/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:03:34 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/09 15:40:43 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog();
        Dog(std::string type);
        Dog(const Dog& copy);
        /*assignement operator*/
        Dog& operator=(const Dog& copy);
        /*destructor*/
        ~Dog();
        /*methods*/
        void    makeSound(void) const;
};

#endif