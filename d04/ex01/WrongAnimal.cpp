/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:22:37 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/09 16:22:38 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->m_type = "WrongAnimal";
    std::cout << "Default constructor for WrongAnimal called!" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type)
{
    this->m_type = type;
    std::cout << "Parametrized constructor called for WrongAnimal!" << std::endl;   
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    this->m_type = copy.m_type;   
    std::cout << "Copy constructor called for WrongAnimal!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
    std::cout << "copy assignement operator caleld for WrongAnimal!" << std::endl;
    if (this != &copy)
    {
        this->m_type = copy.m_type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor for WrongAnimal called!" << std::endl;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "*Default WrongAnimal sound*" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->m_type);
}