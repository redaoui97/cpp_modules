/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:04:15 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/09 15:53:46 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->m_type = "Animal";
    std::cout << "Default constructor for Animal called!" << std::endl;
}

Animal::Animal(const std::string type)
{
    this->m_type = type;
    std::cout << "Parametrized constructor called for Animal!" << std::endl;   
}

Animal::Animal(const Animal& copy)
{
    this->m_type = copy.m_type;   
    std::cout << "Copy constructor called for Animal!" << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
    std::cout << "copy assignement operator caleld for Animal!" << std::endl;
    if (this != &copy)
    {
        this->m_type = copy.m_type;
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destructor for Animal called!" << std::endl;
}

void    Animal::makeSound(void) const
{
    std::cout << "*Default Animal sound*" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->m_type);
}