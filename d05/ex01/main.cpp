/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:27:58 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/24 06:14:18 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat A("A", 20);
    Bureaucrat B("B", 1);
    Form       F1("F1", 100, 5);
    Form       F2("F2", 100, 100);
    
    std::cout << A << std::endl;
    std::cout << F1 << std::endl;
    std::cout << F2 << std::endl;
    
    A.signForm(F1);
    A.signForm(F2);
    B.signForm(F2);
    F1.beSigned(A);
    return (0);
}