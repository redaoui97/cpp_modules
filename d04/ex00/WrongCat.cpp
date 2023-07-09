/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:23:26 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/09 16:23:30 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Default constructor for WrongCat called!" << std::endl;
    this->m_type = "WrongCat";
}

WrongCat::WrongCat(const std::string type)
{
    this->m_type = type;
    std::cout << "Parametrized constructor called for WrongCat!" << std::endl;   
}

WrongCat::WrongCat(const WrongCat& copy)
{
    this->m_type = copy.m_type;   
    std::cout << "Copy constructor called for WrongCat!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
    std::cout << "copy assignement operator caleld for WrongCat!" << std::endl;
    if (this != &copy)
    {
        this->m_type = copy.m_type;
    }
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor for WrongCat called!" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "*WrongCat sound*" << std::endl;
}