/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 08:29:01 by rnabil            #+#    #+#             */
/*   Updated: 2023/09/03 04:05:07 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : m_name(name)
{
    try
    {
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            m_grade = grade;
    }
    catch (const GradeTooHighException& e)
    {
        std::cerr << "High exception: " << e.what() << std::endl;
    }
    catch (const GradeTooLowException& e)
    {
        std::cerr << "Low exception: " << e.what() << std::endl;
    }
}
// Bureaucrat::GradeTooHighException() : runtime_err("") {}
Bureaucrat::Bureaucrat(const Bureaucrat& copy) : m_name(copy.m_name)
{
    try
    {
        if (copy.m_grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (copy.m_grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            this->m_grade = copy.m_grade;
    }
    catch (const GradeTooHighException& e)
    {
        std::cerr << "High exception: " << e.what() << std::endl;
    }
    catch (const GradeTooLowException& e)
    {
        std::cerr << "Low exception: " << e.what() << std::endl;
    }
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
    if (this != &copy)
    {
        try
        {
            if (copy.m_grade > 150)
                throw Bureaucrat::GradeTooLowException();
            else if (copy.m_grade < 1)
                throw Bureaucrat::GradeTooHighException();
            else
            {
                this->m_grade = copy.m_grade;
            }
        }
        catch (const GradeTooHighException& e)
        {
            std::cerr << "High exception: " << e.what() << std::endl;
        }
        catch (const GradeTooLowException& e)
        {
            std::cerr << "Low exception: " << e.what() << std::endl;
        }
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    
}

/*methods & getters*/

int Bureaucrat::getGrade() const
{
    return (m_grade);
}

std::string Bureaucrat::getName() const
{
    return (m_name);
}

void Bureaucrat::incremenetGrade()
{
    try
    {
        if (m_grade - 1 < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            m_grade--;
    }
    catch (const GradeTooHighException& e)
    {
        std::cerr << "High exception: " << e.what() << std::endl;
    }
}

void Bureaucrat::decrementGrade()
{
    try
    {
        if (m_grade + 1 > 150)
            throw Bureaucrat::GradeTooLowException();
        else
            m_grade++;
    }
    catch (const GradeTooLowException& e)
    {
        std::cerr << "Low exception: " << e.what() << std::endl;
    }
}

/*operators overload*/

std::ostream&   operator<<(std::ostream& os,const Bureaucrat& bcrat)
{
    os << bcrat.getName() << ", bureaucrat grade: " << bcrat.getGrade();
    return (os);
}