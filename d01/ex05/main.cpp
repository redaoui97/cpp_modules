/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:22:30 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/08 16:55:06 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl    test;

    if (argc != 2)
    {
        std::cerr << "Invalid arguments!" << std::endl;
        exit (1);
    }
    test.complain(argv[1]);
}