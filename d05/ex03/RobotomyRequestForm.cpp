/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:07:54 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/27 18:46:02 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm()
{
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : AForm("RobotomyRequestForm", 45, 72), m_target(target)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy), m_target(copy.m_target)
{
    
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

void    RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    if (this->isSigned())
    {
        if (executor.getGrade() < this->getExecGrade())
        {
            std::cout << "*Drilling noises*" << std::endl;
            std::srand(std::time(nullptr));
            (std::rand()%2) ? (std::cout << this->m_target << " has been robotomized successfully!" << std::endl) : (std::cout << "Robotomy failed!" << std::endl);
        }
        else
            throw AForm::GradeTooLowException();
    }
    else
        throw AForm::GradeNotSigned();
}
