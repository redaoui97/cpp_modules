/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:07:33 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/28 09:35:23 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    Bureaucrat B1("Bur1", 4);
    Bureaucrat B2("Bur2", 148);
    AForm *Form1 = new ShrubberyCreationForm("Form1");
    AForm *Form1B = new PresidentialPardonForm("Form1B");
    AForm *Form2 = new RobotomyRequestForm("Form2");
    AForm *Form3 = new PresidentialPardonForm("Form3");
    
    std::cout << B1.getName() << " will sign 3 forms." << std::endl;
    B1.signForm(*Form1);
    B1.signForm(*Form2);
    B1.signForm(*Form3);
    std::cout << std::endl;
    
    B1.executeForm(*Form1);
    std::cout << std::endl;

    B1.executeForm(*Form2);
    std::cout << std::endl;
    
    B1.executeForm(*Form3);
    std::cout << std::endl;

    std::cout << std::endl << "Exceptions test" << std::endl; 
    B2.executeForm(*Form1B);
    
    delete Form1;
    delete Form2;
    delete Form3;
    return (0);
}