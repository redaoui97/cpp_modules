/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 22:46:57 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/29 22:54:50 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data user;
    
    user.id   = 0;
    user.name = "reda";

    std::cout << user.id << " : " << user.name << std::endl;
    std::cout << Serializer::serialize(&user) << std::endl;
    return (0);
}