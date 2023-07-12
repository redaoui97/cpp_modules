/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:35:58 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/11 17:15:17 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->m_type = "Cat";
    this->m_brain = new Brain;
    std::cout << "Default constructor for Cat called!" << std::endl;
}

Cat::Cat(const std::string type)
{
    this->m_type = type;
    this->m_brain = new Brain;
    std::cout << "Parametrized constructor called for Cat!" << std::endl;   
}

Cat::Cat(const Cat& copy)
{
    this->m_type = copy.m_type;
    this->m_brain = copy.m_brain; 
    std::cout << "Copy constructor called for Cat!" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
    std::cout << "copy assignement operator caleld for Cat!" << std::endl;
    if (this != &copy)
    {
        this->m_brain = copy.m_brain;
        this->m_type = copy.m_type;
    }
    return (*this);
}

Cat::~Cat()
{
    delete this->m_brain;
    std::cout << "Destructor for Cat called!" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "*Cat sound*" << std::endl;
}