/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 08:29:01 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/19 23:37:55 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : m_name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    else
        m_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : m_name(copy.m_name)
{
    this->m_grade = copy.m_grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
    if (this != &copy)
    {
        this->m_grade = copy.m_grade;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    
}

/*methods & getters*/

int Bureaucrat::getGrade()
{
    return (m_grade);
}

std::string Bureaucrat::getName()
{
    return (m_name);
}

void Bureaucrat::incremenetGrade()
{
    
}