/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:38:57 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/03 19:43:09 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    
}

PhoneBook::~PhoneBook()
{
    
}

int checkFirstName(std::string firstName)
{
    return (SUCCESS);
}

int checkLastName(std::string lastName)
{
    return ();   
}


void    PhoneBook::AddContact()
{
    std::string infos[] = {"first name", "last name", "nickname", "phone number", "darkest secret"};
    std::string buffer;
    void (*FunctionArray[])() = {};
    size_t          i;
    
    i = 0;
    for (i = 0; i < (sizeof(infos)/sizeof(std::string));)
    {
        std::cout << "enter the " << infos[i] << ":" << std::endl;
        std::cin  >> buffer;
        if (!buffer.empty())
            i++;
    }
}

Contact    *PhoneBook::SearchContact()
{
    std::cout << "disabled for now hh" <<std::endl;
    return (NULL);
}

void    PhoneBook::FreeAndExit()
{
    exit(0);
}

