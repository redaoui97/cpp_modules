/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:38:57 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/05 15:14:14 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*Constructors~Destructors*/
PhoneBook::PhoneBook()
{
    size_t  i;

    i = 0;
    while (i < MAX_CONTACTS)
    {
        (this->m_contacts)[i].setInfos(std::to_string(i), "", "", "", "", "");
        i++;
    }
    this->m_availableContactIndex = 0;
	this->m_contactNumber = 0;
}

PhoneBook::~PhoneBook()
{
    
}

/*Methods*/
/*Check and static functions*/
static int checkFirstName(std::string firstName, Contact *contact)
{
    if (firstName.empty())
        return (FAILURE);
	contact->setInfos("", firstName, "", "", "", "");
    return (SUCCESS);
}

static int checkLastName(std::string lastName, Contact *contact)
{
    if (lastName.empty())
        return (FAILURE);
    contact->setInfos("", "", lastName, "", "", "");
    return (SUCCESS);   
}

static int	checkNickname(std::string nickname, Contact *contact)
{
    if (nickname.empty())
        return (FAILURE);
	contact->setInfos("", "", "", nickname, "", "");
	return (SUCCESS);	
}

static int	checkPhoneNumber(std::string phoneNumber, Contact *contact)
{
    if (phoneNumber.empty())
        return (FAILURE);
	contact->setInfos("", "", "", "", phoneNumber, "");
	return (SUCCESS);
}

static int	checkDarkestSecret(std::string darkestSecret, Contact *contact)
{
    if (darkestSecret.empty())
        return (FAILURE);
	contact->setInfos("", "", "", "", "", darkestSecret);
	return (SUCCESS);
}

int	PhoneBook::SelectContact()
{
	int			res;
	std::string	buffer;

	while (69)
	{
		std::cout << "Choose a contact :";
    	std::getline(std::cin, buffer);
		if (std::cin.eof())
		    this->FreeAndExit();
        if (buffer == "stop")
            return (-1);
		if (std::isdigit(buffer[0]) && (buffer.length() == 1))
			if (buffer[0] - '0' >= 0 && buffer[0] - '0' <= 7)
                if ((buffer[0] - '0') < this->m_contactNumber)
				    break;
	}
	res = buffer[0] - '0';
	return (res);
}
/*End static functions*/

/*Non static and non main functions*/
int PhoneBook::SetCurrentContact()
{
    int availableContactIndex;
    
    availableContactIndex = this->m_availableContactIndex;
    if (this->m_availableContactIndex == 7)
        this->m_availableContactIndex = 0;
    else
        this->m_availableContactIndex += 1;
    return (availableContactIndex);
}
/*End non static non main functions*/

/*Main functions */
void    PhoneBook::AddContact()
{
    int (*FunctionArray[])(std::string, Contact*) = {checkFirstName, checkLastName, checkNickname, checkPhoneNumber, checkDarkestSecret, NULL};
    std::string infos[] = {"first name", "last name", "nickname", "phone number", "darkest secret"};
    std::string buffer;
    Contact     *currentContact;
    size_t      i;
    
    i = 0;
    currentContact = &(this->m_contacts)[SetCurrentContact()];
    std::cout << "===========================" << std::endl;
    while(i < (sizeof(infos)/sizeof(std::string)))
    {
        std::cout << "enter the " << infos[i] << ": ";
        std::getline(std::cin, buffer);
        if (std::cin.eof())
            this->FreeAndExit();
        if ((FunctionArray[i](buffer, currentContact)) == SUCCESS)
			i++;
        else
            std::cout << "Error setting up " << infos[i] << std::endl;
    }
	this->m_contactNumber++;
    std::cout << "Contact added successfully!" << std::endl;
    std::cout << "===========================" << std::endl;
}

void    PhoneBook::SearchContact()
{
    int		i;
	int		selectedContact;
	
    std::cout << " ===================================================" << std::endl;
    std::cout << "|    Index   | First Name | Last Name  |  Nickname  |" << std::endl;
    std::cout << "|------------|------------|------------|------------|" << std::endl;
	i = 0;
	while (i < this->m_contactNumber && i < MAX_CONTACTS)
	{
		(this->m_contacts)[i].printData();	
    	std::cout << " ===================================================" << std::endl;
		i++;
	}
	if ((selectedContact = SelectContact()) == -1)
        return ;
    (this->m_contacts)[selectedContact].PrintAllData();
}

void    PhoneBook::FreeAndExit()
{
    std::cout << "Thank you for using our shitty phonebook hh" << std::endl;
    exit(0);
}

