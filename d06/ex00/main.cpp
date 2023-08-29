/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:54:40 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/29 20:51:47 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static std::string removeFloatChar(std::string input)
{
    std::string str = input;

    if (str.length() > 1 && str[str.length() - 1] == 'f')
    {
        if (str[str.length() - 2] >= '0' && str[str.length() - 2] <= '9')
            str.erase(str.length() - 1);
    }
    return (str);
}

int main(int argc, char **argv)
{
    std::string input;
    
    if (argc == 2)
    {
        if (argv[1])
        {
            if (strcmp(argv[1], "inff") && strcmp(argv[1], "+inff") && strcmp(argv[1], "-inff"))
                input =  removeFloatChar(argv[1]);  
            else
                input = argv[1];
            ScalarConverter::Convert(input);
        }
    } 
    else
        std::cerr << "invalid arguments!" << std::endl;
    return (0);
}