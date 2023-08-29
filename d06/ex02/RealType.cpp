/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RealType.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 23:07:57 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/29 23:50:41 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RealType.hpp"

Base::~Base()
{
    
}

Base* generate(void)
{
    Base *ptr = NULL;
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    
    if ((std::rand() % 3) == 1)
        ptr = new A();
    else if ((std::rand() % 3) == 2)
        ptr = new B();
    else
        ptr = new C();
    
    return (ptr);
}

void identify(Base* p)
{
    if (p)
    {
        if (dynamic_cast<A*>(p)){
            std::cout << "The class is A" << std::endl;
        }
        if (dynamic_cast<B*>(p)){
            std::cout << "The class is B" << std::endl;
        }
        if (dynamic_cast<C*>(p)){
            std::cout << "The class is C" << std::endl;
        }
    }
}

void identify(Base& p)
{
    try
    {
        Base& test1 = dynamic_cast<A&>(p);
        std::cout << "The class is A" << std::endl;     
    }
    catch(std::exception& e)
    {
           
    }
    try
    {
        Base& test2 = dynamic_cast<B&>(p);
        std::cout << "The class is B" << std::endl;     
    }
    catch(std::exception& e)
    {
           
    }
    try
    {
        Base& test3 = dynamic_cast<C&>(p);
        std::cout << "The class is C" << std::endl;     
    }
    catch(std::exception& e)
    {
           
    }
}