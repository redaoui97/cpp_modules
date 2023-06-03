/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:38:57 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/04 00:48:37 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    size_t  i;

    i = 0;
    while (i < 8)
    {
        (this->m_contacts)[i].setInfos(std::to_string(i), NULL, NULL, NULL, NULL, NULL);
        i++;
    }
}

PhoneBook::~PhoneBook()
{
    
}

static int checkFirstName(std::string firstName, Contact *contact)
{
	contact->setInfos(NULL, firstName, NULL, NULL, NULL, NULL);
    return (SUCCESS);
}

static int checkLastName(std::string lastName, Contact *contact)
{
	(void)lastName;
    (void)contact;
    return (SUCCESS);   
}

static int	checkNickname(std::string nickname, Contact *contact)
{
	(void)nickname;
    (void)contact;
	return (SUCCESS);	
}

static int	checkPhoneNumber(std::string phoneNumber, Contact *contact)
{
	(void)phoneNumber;
    (void)contact;
	return (SUCCESS);
}

static int	checkDarkestSecret(std::string darkestSecret, Contact *contact)
{
	(void)darkestSecret;
    (void)contact;
	return (SUCCESS);
}

void    PhoneBook::AddContact()
{
    int (*FunctionArray[])(std::string, Contact*) = {checkFirstName, checkLastName, checkNickname, checkPhoneNumber, checkDarkestSecret, NULL};
    std::string infos[] = {"first name", "last name", "nickname", "phone number", "darkest secret"};
    std::string buffer;
    size_t      i;
    
    for (i = 0; i < (sizeof(infos)/sizeof(std::string));)
    {
        std::cout << "enter the " << infos[i] << ":" << std::endl;
        std::getline(std::cin, buffer);
        if (FunctionArray[i](buffer, &(this->m_contacts[i])) == SUCCESS)
        {
			i++;
        }
    }
    this->m_contacts->printData();
}

Contact    *PhoneBook::SearchContact()
{
    std::cout << "disabled for now hh" <<std::endl;
    return (NULL);
}

void    PhoneBook::FreeAndExit()
{
    std::cout << "Thank you for using phonebook hh" << std::endl;
    exit(0);
}

