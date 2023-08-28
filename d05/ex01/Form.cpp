/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:51:37 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/28 09:12:38 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : m_signed(0), m_requiredGradeExecute(150), m_requiredGradeSign(150)
{
    
}

Form::Form(const std::string name, int gradeExecute, int gradeSign) : m_name(name), m_requiredGradeExecute(gradeExecute), m_requiredGradeSign(gradeSign)
{
    try
    {
        if (gradeSign > 150 || gradeExecute > 150)
            throw Form::GradeTooLowException();
        else if (gradeSign < 1 || gradeExecute < 1)
            throw Form::GradeTooHighException();
    }
    catch (const GradeTooHighException& e)
    {
        std::cerr << "High exception: " << e.what() << std::endl;
    }
    catch (const GradeTooLowException& e)
    {
        std::cerr << "Low exception: " << e.what() << std::endl;
    }
    this->m_signed = 0;
}

Form::Form(const Form& copy) : m_name(copy.m_name), m_signed(copy.m_signed), m_requiredGradeExecute(copy.m_requiredGradeExecute), m_requiredGradeSign(copy.m_requiredGradeSign)
{

}

Form& Form::operator=(const Form& copy)
{
    if (&copy != this)
    {
        this->m_signed = copy.m_signed;
    }
    return (*this);
}

Form::~Form()
{
    
}

void    Form::beSigned(Bureaucrat bcrat)
{
    try
    {
        if (bcrat.getGrade() > m_requiredGradeSign)
            throw Form::GradeTooLowException();
        else
            m_signed = 1;
    }
    catch (const GradeTooLowException& e)
    {
        std::cerr << "Low exception: " << e.what() << std::endl;
    }  
}

bool    Form::isSigned() const
{
    return (m_signed);    
}

std::string     Form::getName() const
{
    return (m_name);  
}

int             Form::getSignGrade() const
{
    return (m_requiredGradeSign);    
}

int             Form::getExecGrade() const
{
    return (m_requiredGradeExecute);   
}

std::ostream&   operator<<(std::ostream& os, const Form& frm)
{
    os << frm.getName() << (frm.isSigned()?" is signed":" isn't signed") << ", required grade to sign: " << frm.getSignGrade() << ", required grade to execute: " << frm.getExecGrade();
    return (os);
}