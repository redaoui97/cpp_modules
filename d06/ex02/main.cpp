/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 23:07:21 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/30 16:28:31 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RealType.hpp"
#include <unistd.h>

int main(void)
{
    Base* ptr;
    Base* ref;
    
    ptr = generate();
    usleep(500000);
    ref = generate();
    identify(ptr);
    identify(*ref);
    
    delete ptr;
    delete ref;
    return (0);
}