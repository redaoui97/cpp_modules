/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:57:50 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/27 22:36:05 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern &a)
{
    (void)a;
}
Intern& Intern::operator=(const Intern& a)
{
    (void)a;
    return (*this);
}

Intern::~Intern()
{

}

AForm* Intern::makeForm(std::string formName, std::string formTarget)
{
    AForm       *ptr = NULL;
        
    (formName == "shrubbery creation")  ? (ptr = new ShrubberyCreationForm(formTarget))  : ptr;
    (formName == "robotomy request")   ? (ptr = new RobotomyRequestForm(formTarget))     : ptr;
    (formName == "presidential pardon") ? (ptr = new PresidentialPardonForm(formTarget)) : ptr;
    ptr ? (std::cout << "Intern creates "+formName << std::endl) : (std::cout << "Intern failed to create "+formName << std::endl);
    return (ptr);
}