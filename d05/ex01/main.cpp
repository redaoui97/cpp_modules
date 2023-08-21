/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:27:58 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/20 20:00:19 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    //Delcarations and exceptions handling example 
    Bureaucrat A("A",5);
    Bureaucrat B("B",1);
    Bureaucrat C("C",150);
    //exception throwing case
    Bureaucrat D("D",151);
    Bureaucrat E("E",-1);
    
    //getName and getGrade methods
    std::cout << std::endl << A.getName() << " : " << A.getGrade() << std::endl;
    std::cout << B.getName() << " : " << B.getGrade() << std::endl;
    std::cout << C.getName() << " : " << C.getGrade() << std::endl;

    //Grade incremenet/decrement methods & exception handling
    std::cout << std::endl << "Incrementing and decrementing A:" << std::endl;
    A.incremenetGrade();
    std::cout << A.getName() << " : " << A.getGrade() << std::endl;
    A.decrementGrade();
    std::cout << A.getName() << " : " << A.getGrade() << std::endl;
    std::cout << std::endl << "Incrementing/Decrementing B & C to trigger exception: " << std::endl;
    B.incremenetGrade();
    C.decrementGrade();

    //Insertion operator overload
    std::cout << std::endl << "Calling the overloaded << operator" << std::endl;
    std::cout << A << std::endl;
    std::cout << B << std::endl;
    return (0);
}