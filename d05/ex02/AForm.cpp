/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:15:07 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/27 17:37:10 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"

AForm::AForm() : m_name("default"), m_requiredGradeExecute(150), m_requiredGradeSign(150)
{
    
}
AForm::~AForm()
{
    
}

AForm::AForm(const std::string name, int gradeExecute, int gradeSign) : m_name(name), m_requiredGradeExecute(gradeExecute), m_requiredGradeSign(gradeSign)
{
    try
    {
        if (gradeSign < 1 || gradeExecute < 1)
            throw AForm::GradeTooLowException();
        else if (gradeSign > 150 || gradeExecute > 150)
            throw AForm::GradeTooHighException();
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

AForm::AForm(const AForm& copy) : m_name(copy.m_name), m_signed(copy.m_signed), m_requiredGradeExecute(copy.m_requiredGradeExecute), m_requiredGradeSign(copy.m_requiredGradeSign)
{

}

AForm& AForm::operator=(const AForm& copy)
{
    if (&copy != this)
    {
        this->m_signed = copy.m_signed;
    }
    return (*this);
}

void    AForm::beSigned(Bureaucrat bcrat)
{
    try
    {
        if (bcrat.getGrade() > m_requiredGradeSign)
            throw AForm::GradeTooLowException();
        else
            m_signed = 1;
    }
    catch (const GradeTooLowException& e)
    {
        std::cerr << "Low exception: " << e.what() << std::endl;
    }  
}

bool    AForm::isSigned() const
{
    return (m_signed);    
}

std::string     AForm::getName() const
{
    return (m_name);  
}

int             AForm::getSignGrade() const
{
    return (m_requiredGradeSign);    
}

int             AForm::getExecGrade() const
{
    return (m_requiredGradeExecute);   
}

std::ostream&   operator<<(std::ostream& os, const AForm& frm)
{
    os << frm.getName() << (frm.isSigned()?" is signed":" isn't signed") << ", required grade to sign: " << frm.getSignGrade() << ", required grade to execute: " << frm.getExecGrade();
    return (os);
}