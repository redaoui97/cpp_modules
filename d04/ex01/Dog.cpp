/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:33:52 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/11 17:05:07 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->m_type = "Dog";
    this->m_brain = new Brain;
    std::cout << "Default constructor for Dog called!" << std::endl;
}

Dog::Dog(const std::string type)
{
    this->m_type = type;
    this->m_brain = new Brain;
    std::cout << "Parametrized constructor called for Dog!" << std::endl;   
}

Dog::Dog(const Dog& copy)
{
    this->m_type = copy.m_type;
    this->m_brain = copy.m_brain; 
    std::cout << "Copy constructor called for Dog!" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
    std::cout << "copy assignement operator caleld for Dog!" << std::endl;
    if (this != &copy)
    {
        this->m_type = copy.m_type;
        this->m_brain = copy.m_brain; 
    }
    return (*this);
}

Dog::~Dog()
{
    delete m_brain;
    std::cout << "Destructor for Dog called!" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "*Dog sound*" << std::endl;
}