/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:19:28 by rnabil            #+#    #+#             */
/*   Updated: 2023/09/01 23:55:42 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{

}

Span::Span(unsigned int N) : m_max(N)
{

}

Span::Span(const Span& copy) : m_max(copy.m_max)
{
    m_container = copy.m_container;
}

Span& Span::operator=(const Span& copy)
{
    if(this != &copy)
    {
        m_max = copy.m_max;
        m_container = copy.m_container;
    }
    return (*this);
}

Span::~Span()
{
    
}

void    Span::addNumber(int num)
{
    if (m_container.size() < m_max)
    {
        m_container.push_back(num);
    }
    else
    {
        throw std::runtime_error("There are already max integers inside the array!");
    }
}

unsigned int    Span::longestSpan()
{    
    if (m_container.size() < 2)
        throw std::runtime_error("There are less than 2 elements inside the container!");
    else
    {
        return ((*std::max_element(m_container.begin(), m_container.end())) - (*std::min_element(m_container.begin(), m_container.end())));
    }
}

unsigned int Span::shortestSpan()
{
    int diff = 0;
    std::deque<int>::iterator iter;
    std::deque<int> copy = m_container;
    
    if (m_container.size() < 2)
        throw std::runtime_error("There are less than 2 elements inside the container!");
    else
    {
        std::sort(copy.begin(), copy.end());
        diff = copy.at(1) - copy.at(0);
        iter = copy.begin();
        while (iter != copy.end())
        {
            if ((iter + 1) != copy.end())
            {
                if ((*(iter+1) - *iter) < diff)
                    diff = (*(iter+1) - *iter);
            }
            iter++;
        }  
        return (diff);
    }
}
void    Span::printValues()
{
    std::cout << (m_container.size() ? "Values stored: " : "No values stored!") << std::endl;
    for (unsigned int i = 0; i < m_container.size(); i++)
    {
        std::cout << i << " : " << m_container.at(i) << std::endl;
    }
}