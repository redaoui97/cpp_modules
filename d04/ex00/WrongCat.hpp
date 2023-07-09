/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:57:18 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/09 16:31:26 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    protected:
        std::string m_type;
    public:
        /*constructors*/
        WrongCat();
        WrongCat(const std::string type);
        WrongCat(const WrongCat& copy);
        /*assignement operator*/
        WrongCat& operator=(const WrongCat& copy);
        /*destructor*/
        virtual ~WrongCat();
        /*methods*/
        std::string     getType(void) const;
        virtual void    makeSound(void) const;
};

#endif