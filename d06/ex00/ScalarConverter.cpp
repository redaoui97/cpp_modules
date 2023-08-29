/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:14:09 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/29 20:48:36 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


void ScalarConverter::Convert(std::string input)
{   
    try
    {
        toChar(input);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Char: " << e.what() << '\n';
    }
    try
    {
        toInt(input);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Int: " << e.what() << '\n';
    }
    try
    {
        toFloat(input);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Float: " << e.what() << '\n';
    }
    try
    {
        toDouble(input);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Double: " << e.what() << '\n';
    }
}

void    toChar(std::string input)
{
    std::istringstream  iss(input);
    int                 converted;
    
    if (iss >> converted && converted >= 0 && converted <= 127)
    {
        if (converted <= 126 && converted >= 32)
            std::cout << "char : '" << static_cast<char>(converted) << "'" << std::endl;
        else
            throw std::runtime_error("Non displayable!");
    }
    else if (input.length() == 1)
    {
        if (input.at(0) <= 126 && input.at(0) >= 32)
            std::cout << "char : '" << input.at(0) << "'" << std::endl;
        else
            throw std::runtime_error("Non displayable!");
    }
    else
        throw std::runtime_error("impossible");
}

void     toInt(std::string input)
{
    std::istringstream  iss(input);
    double              converted;

    if (iss >> converted)
    {
        if (converted > -2147483648 && converted < 2147483647)
            std::cout << "Int  : " << static_cast<int>(converted) << std::endl;
        else
            throw std::runtime_error("out of integer bounderies!");
    }
    else if (input.length() == 1)
    {
        std::cout << "int  : " << static_cast<int>(input.at(0)) << std::endl;
    }
    else
        throw std::runtime_error("impossible");
}

void   toFloat(std::string input)
{
    std::istringstream  iss(input);
    double              converted;
    
    if (!strcmp(input.c_str(), "-inff") || !strcmp(input.c_str(), "-inf"))
    {
        std::cout << "Float: -inff" << std::endl;
        return ;
    }
    if (!strcmp(input.c_str(), "+inff") || !strcmp(input.c_str(), "+inf"))
    {
        std::cout << "Float: inff" << std::endl;
        return ;
    }
    if (!strcmp(input.c_str(), "inff") || !strcmp(input.c_str(), "inf"))
    {
        std::cout << "Float: inff" << std::endl;
        return ;
    }
    if (!strcmp(input.c_str(), "-nan") || !strcmp(input.c_str(), "+nan") || !strcmp(input.c_str(), "nan") || !strcmp(input.c_str(), "nanf") || !strcmp(input.c_str(), "+nanf") || !strcmp(input.c_str(), "-nanf"))
    {
        std::cout << "Float: nanf" << std::endl;
        return ;
    }
    if (iss >> converted)
    {
        if (converted >= -FLT_MAX && converted <= FLT_MAX)
            std::cout << "Float: " << static_cast<float>(converted) << (converted == (int)converted ? ".0f" : "f") << std::endl;
        else
            throw std::runtime_error("out of float bounderies!");
    }
    else if (input.length() == 1)
    {
        std::cout << "Float: " << static_cast<float>(input.at(0)) << (static_cast<float>(converted) == (int)converted ? ".0f" : "f") << std::endl;
    }
    else
        throw std::runtime_error("impossible");
}

void  toDouble(std::string input)
{
    std::istringstream  iss(input);
    double              converted;

    if (!strcmp(input.c_str(), "-nan") || !strcmp(input.c_str(), "+nan") || !strcmp(input.c_str(), "nan") || !strcmp(input.c_str(), "nanf") || !strcmp(input.c_str(), "+nanf") || !strcmp(input.c_str(), "-nanf"))
    {
        std::cout << "Float: nan" << std::endl;
        return ;
    }
    if (iss >> converted)
    {
        std::cout << "Float: " << converted << std::endl;
    }
    else if (input.length() == 1)
    {
        std::cout << "Float: " << static_cast<double>(input.at(0)) << (static_cast<double>(converted) == (int)converted ? ".0" : "") << std::endl;
    }
    else
        throw std::runtime_error("impossible");
}