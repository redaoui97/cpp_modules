/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:04:34 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/24 06:12:57 by rnabil           ###   ########.fr       */
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
        if (grade < 1)
            throw Bureaucrat::GradeTooLowException();
        else if (grade > 150)
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

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : m_name(copy.m_name)
{
    try
    {
        if (copy.m_grade < 1)
            throw Bureaucrat::GradeTooLowException();
        else if (copy.m_grade > 150)
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
            if (copy.m_grade < 1)
                throw Bureaucrat::GradeTooLowException();
            else if (copy.m_grade > 150)
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

void Bureaucrat::signForm(Form& frm)
{
    if (frm.isSigned() == 0)
    {
        if (this->m_grade < frm.getSignGrade())
        {
            std::cout << this->getName() << " signed " << frm.getName() << std::endl;
            frm.beSigned(*this);
        }
        else
            std::cout << this->getName() << " coudn't sign " << frm.getName() << " because his grade is too low" << std::endl;
    }
    else
        std::cout << this->getName() << " coudn't sign " << frm.getName() << " because his it's already signed" << std::endl;
 }

/*operators overload*/

std::ostream&   operator<<(std::ostream& os,const Bureaucrat& bcrat)
{
    os << bcrat.getName() << ", bureaucrat grade: " << bcrat.getGrade();
    return (os);
}
