/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:38:46 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/05 15:15:25 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    
}

Contact::~Contact()
{
    
}
 
void    Contact::setInfos(std::string id, std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret)
{
    if (!id.empty())
        this->m_id = id;
    if (!nickname.empty())
        this->m_nickname = nickname;
    if (!firstName.empty())
        this->m_firstName = firstName;
    if (!lastName.empty())
        this->m_lastName = lastName;
    if (!phoneNumber.empty())
        this->m_phoneNumber = phoneNumber;
    if (!darkestSecret.empty())
        this->m_darkestSecret = darkestSecret;
}

static std::string FixString(std::string str)
{
    std::string res;
    size_t      i;
    
    i = 0;
    res += ' ';
    if (str.length() == 10)
    {
        res = str;
        res += ' ';
    }
    else if (str.length() > 10)
    {
        res = str.substr(0,10);
        res += '.';
    }
    else
    {
        while (i < (10 -str.length()))
        {
            res += ' ';
            i++;  
        }
        res += str;
    }
    return (res);
}

void    Contact::printData()
{
    std::cout << "| " << FixString(this->m_id);
    std::cout << "| " << FixString(this->m_firstName);
    std::cout << "| " << FixString(this->m_lastName);
    std::cout << "| " << FixString(this->m_nickname) << "|" << std::endl;
}

void    Contact::PrintAllData()
{
    std::cout << "-id: " << this->m_id << std::endl;
    std::cout << "-First name: " << this->m_firstName << std::endl;
    std::cout << "-Last name: " << this->m_lastName << std::endl;
    std::cout << "-Nickname: " << this->m_nickname << std::endl;
    std::cout << "-Phone number: " << this->m_phoneNumber << std::endl;
    std::cout << "-Darkest secret:" << this->m_darkestSecret << std::endl;
}