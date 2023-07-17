/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:25:54 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/11 18:03:03 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor called for Brain" << std::endl;
}

Brain::Brain(const Brain& copy)
{
    int i = 0;
    
    std::cout << "copy constructor called on Brain" << std::endl;
    while (i < MAX_IDEAS)
    {
        this->ideas[i] = copy.ideas[i];
        i++;
    } 
}

Brain&  Brain::operator = (const Brain& copy)
{
    int i = 0;
    
    std::cout << "copy assignement operator called on Brain" << std::endl;
    if (this != &copy)
    {
        while (i < MAX_IDEAS)
        {
            this->ideas[i] = copy.ideas[i];
            i++;
        } 
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "destructor called on Brain" << std::endl;
} 