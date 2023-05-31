/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:38:57 by rnabil            #+#    #+#             */
/*   Updated: 2023/05/30 16:54:22 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    
}

PhoneBook::PhoneBook()
{
    
}

void    AddContact()
{
    std::string infos[] = {"First name", "last name", "nickname", "phone number", "darkest secret"};
    int         i;
    
    i = 0;
    for (i = 0; i < infos->size(); i++)
    {
        std::cout << infos[i] << std::endl;
    }
}