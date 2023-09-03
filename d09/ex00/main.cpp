/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 06:11:45 by rnabil            #+#    #+#             */
/*   Updated: 2023/09/03 08:26:35 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


static void BitcoinExchange(std::string file)
{
    //open both file and data.csv
    //return an error if can't open files
    //parse_file  
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Invalid arguements!";
        return (1);       
    }
    BitcoinExchange(argv[1]);
    return (0);
}