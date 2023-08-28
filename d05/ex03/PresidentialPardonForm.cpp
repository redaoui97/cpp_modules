/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:07:43 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/27 18:40:01 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm()
{
    
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 5, 25), m_target(target)
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy), m_target(copy.m_target)
{
    
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

void    PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    if (this->isSigned())
    {
        if (executor.getGrade() < this->getExecGrade())
        {
            std::cout << this->m_target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
        }
        else
            throw AForm::GradeTooLowException();
    }
    else
        throw AForm::GradeNotSigned();
}