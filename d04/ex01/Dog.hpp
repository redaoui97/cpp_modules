/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:03:34 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/11 17:03:56 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *m_brain;
        
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