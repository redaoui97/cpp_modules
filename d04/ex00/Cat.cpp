/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:35:58 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/09 15:49:46 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default constructor for Cat called!" << std::endl;
    this->m_type = "Cat";
}

Cat::Cat(const std::string type)
{
    this->m_type = type;
    std::cout << "Parametrized constructor called for Cat!" << std::endl;   
}

Cat::Cat(const Cat& copy)
{
    this->m_type = copy.m_type;   
    std::cout << "Copy constructor called for Cat!" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
    std::cout << "copy assignement operator caleld for Cat!" << std::endl;
    if (this != &copy)
    {
        this->m_type = copy.m_type;
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Destructor for Cat called!" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "*Cat sound*" << std::endl;
}