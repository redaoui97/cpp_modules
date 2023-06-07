/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:35:38 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/07 11:50:04 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string &stringREF = var;
    
    std::cout << "var      : " << &var << " : " << var << std::endl;
    std::cout << "stringPTR: " << stringPTR << " : " << *stringPTR << std::endl;
    std::cout << "stringREF: " << &stringREF << " : " << stringREF << std::endl;
    return (0);
}