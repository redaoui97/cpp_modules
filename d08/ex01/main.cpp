/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:27:24 by rnabil            #+#    #+#             */
/*   Updated: 2023/09/02 00:04:04 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

static void tests(unsigned int max)
{
    Span obj(max);
    std::srand(static_cast<unsigned int>(std::time(0)));    
    
    //add max integers; when it reaches the condition of max values stored: it throws and exception and breaks the loop
    for (unsigned int i = 0; i < (max + 2); i++)
    {
        try
        {
            obj.addNumber(std::rand() % 101);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            break ;
        }
    }
    
    //print the values stored:
    obj.printValues();

    //longest span
    try
    {
        std::cout << "Longest span: " << obj.longestSpan() << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << "Longest span exception: " << e.what() << std::endl;
    }

    //shortest span
    try
    {
        std::cout << "Shortest span: " << obj.shortestSpan() << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << "Shortest span exception: " << e.what() << std::endl;
    }
    
}

int main(int argc, char **argv)
{        
    if (argc != 2)
    {
        std::cout << "invalid arugments!" << std::endl;
        return (1);
    }
    tests(static_cast<unsigned int>(std::atoi(argv[1])));
    return (0);
}