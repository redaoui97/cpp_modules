/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:59:51 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/09 15:40:39 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class   Cat : public Animal
{
    public :
        Cat();
        Cat(std::string type);
        Cat(const Cat& copy);
        /*assignement operator*/
        Cat& operator=(const Cat& copy);
        /*destructor*/
        ~Cat();
        /*methods*/
        void    makeSound(void) const;
};

#endif