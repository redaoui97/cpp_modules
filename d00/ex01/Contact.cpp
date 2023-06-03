/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:38:46 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/04 00:50:13 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    
}

Contact::~Contact()
{
    
}
 
void    Contact::setInfos(std::string id, std::string nickname, std::string firstName, std::string lastName, std::string phoneNumber, std::string darkestSecret)
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

void    Contact::fetchData(std::string *id, std::string *firstName, std::string *lastName, std::string *darkestSecret, std::string *nickname, std::string *phoneNumber)
{
    *id = this->m_id;
    *firstName = this->m_firstName;
    *lastName = this->m_lastName;
    *nickname = this->m_nickname;
    *phoneNumber = this->m_phoneNumber;
    *darkestSecret = this->m_darkestSecret;
}

void    Contact::printData()
{
    std::cout << this->m_id << std::endl;
    std::cout << this->m_firstName << std::endl;
    std::cout << this->m_lastName << std::endl;
    std::cout << this->m_phoneNumber << std::endl;
    std::cout << this->m_nickname << std::endl;
    std::cout << this->m_darkestSecret << std::endl;
}