/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:08:13 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/27 18:57:51 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm("ShrubberyCreationForm", 137, 145), m_target(target)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy), m_target(copy.m_target)
{
    
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

void    ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    std::string   fileName = this->m_target + "_shrubbery";
    std::ofstream fileOut(fileName);
    
    if (this->isSigned())
    {
        if (executor.getGrade() < this->getExecGrade())
        {
            if (!fileOut.is_open())
                throw std::runtime_error("Error opening up "+fileName);
            fileOut << "hello" << std::endl;
            fileOut.close();
        }
        else
            throw AForm::GradeTooLowException();
    }
    else
        throw AForm::GradeNotSigned();
}
