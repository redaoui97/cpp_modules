/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:16:21 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/09 16:21:56 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string m_type;
    public:
        /*constructors*/
        WrongAnimal();
        WrongAnimal(const std::string type);
        WrongAnimal(const WrongAnimal& copy);
        /*assignement operator*/
        WrongAnimal& operator=(const WrongAnimal& copy);
        /*destructor*/
        virtual ~WrongAnimal();
        /*methods*/
        std::string     getType(void) const;
        void    makeSound(void) const;
};
#endif