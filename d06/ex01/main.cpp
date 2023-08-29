/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 22:46:57 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/29 23:01:46 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data      user;
    uintptr_t intptr;
    
    
    user.id   = 0;
    user.name = "reda";
    
    std::cout << user.id << " : " << user.name << std::endl;
    intptr = Serializer::serialize(&user);
    std::cout << (*(Serializer::deserialize(intptr))).id << " : " << (Serializer::deserialize(intptr)->name) << std::endl;
    return (0);
}