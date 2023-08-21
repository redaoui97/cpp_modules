/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:51:37 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/20 20:15:57 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
    m_signed = 0;
}

Form::~Form()
{
    
}

Form::Form(const std::string name, int gradeSign, int gradeExecute) : m_name(name)
{
    this->m_signed = 0;
    this->m_requiredGradeSign = gradeSign;
    this->m_requiredGradeExecute = gradeExecute;
}

Form& Form::operator=(const Form& copy)
{
    if (&copy != this)
    {
        this->m_signed = copy.m_signed;
        this->m_requiredGradeSign = copy.m_requiredGradeSign;
        this->m_requiredGradeExecute = copy.m_requiredGradeExecute;
    }
    return (*this);
}

Form::Form(const Form& copy)
{
    this->m_signed = copy.m_signed;
    this->m_requiredGradeSign = copy.m_requiredGradeSign;
    this->m_requiredGradeExecute = copy.m_requiredGradeExecute;
}
