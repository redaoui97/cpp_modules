/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 23:07:21 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/29 23:51:29 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RealType.hpp"

int main(void)
{
    Base* ptr;
    Base& a = new A();
    
    ptr = generate();
    identify(ptr);
    
    delete ptr;
    free a;
    return (0);
}