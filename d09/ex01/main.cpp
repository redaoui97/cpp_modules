/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 07:23:49 by rnabil            #+#    #+#             */
/*   Updated: 2023/09/04 07:54:17 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "invalid arguments" << std::endl;
        return (1);
    }
    try
    {
        RPN a(argv[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error" << '\n';
    }
    
    return (0);
}