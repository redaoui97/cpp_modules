/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:38:46 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/03 18:28:30 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    
}

Contact::~Contact()
{
    
}

Contact::Contact(int id, std::string firstName, std::string lastName, std::string phoneNumber, std::string darkestSecret)
{
    this->m_id = id;
    this->m_firstName = firstName;
    this->m_lastName = lastName;
    this->m_phoneNumber = phoneNumber;
    this->m_darkestSecret = darkestSecret;
}
 
void    Contact::setInfos(int id, std::string firstName, std::string lastName, std::string phoneNumber, std::string darkestSecret)
{
    if (id)
        this->m_id = id;
    if (!firstName.empty())
        this->m_firstName = firstName;
    if (!lastName.empty())
        this->m_lastName = lastName;
    if (!phoneNumber.empty())
        this->m_phoneNumber = phoneNumber;
    if (!darkestSecret.empty())
        this->m_darkestSecret = darkestSecret;
}
