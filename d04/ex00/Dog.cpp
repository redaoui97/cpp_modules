/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:33:52 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/09 15:50:06 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->m_type = "Dog";
    std::cout << "Default constructor for Dog called!" << std::endl;
}

Dog::Dog(const std::string type)
{
    this->m_type = type;
    std::cout << "Parametrized constructor called for Dog!" << std::endl;   
}

Dog::Dog(const Dog& copy)
{
    this->m_type = copy.m_type;   
    std::cout << "Copy constructor called for Dog!" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
    std::cout << "copy assignement operator caleld for Dog!" << std::endl;
    if (this != &copy)
    {
        this->m_type = copy.m_type;
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor for Dog called!" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "*Dog sound*" << std::endl;
}