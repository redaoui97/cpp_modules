/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RealType.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 23:08:02 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/29 23:37:30 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REALTYPE_HPP
# define REALTYPE_HPP

#include <iostream>

class Base
{
    public:
        virtual ~Base();
};

class A : public Base
{
    public:
        A() {std::cout << "class A created" << std::endl;}
};

class B : public Base
{
    public:
        B() {std::cout << "class B created" << std::endl;}
};

class C : public Base
{
    public:
        C() {std::cout << "class C created" << std::endl;}
};


Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif