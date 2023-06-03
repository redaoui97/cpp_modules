/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:38:57 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/03 21:19:46 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    
}

PhoneBook::~PhoneBook()
{
    
}

static int checkFirstName(std::string firstName)
{
	(void)firstName;
	std::cout << "checked first name" << std::endl;
    return (SUCCESS);
}

static int checkLastName(std::string lastName)
{
	(void)lastName;
	std::cout << "checked last name" << std::endl;
    return (SUCCESS);   
}

static int	checkNickname(std::string nickname)
{
	(void)nickname;
	std::cout << "checked nickname" << std::endl;
	return (SUCCESS);	
}

static int	checkPhoneNumber(std::string phoneNumber)
{
	(void)phoneNumber;
	std::cout << "checked phone number" << std::endl;
	return (SUCCESS);
}

static int	checkDarkestSecret(std::string darkestSecret)
{
	(void)darkestSecret;
	std::cout << "checked darkest secret" << std::endl;
	return (SUCCESS);
}

void    PhoneBook::AddContact()
{
    int (*FunctionArray[])(std::string) = {checkFirstName, checkLastName, checkNickname, checkPhoneNumber, checkDarkestSecret, NULL};
    std::string infos[] = {"first name", "last name", "nickname", "phone number", "darkest secret"};
    std::string buffer;
    size_t      i;
    
    for (i = 0; i < (sizeof(infos)/sizeof(std::string));)
    {
        std::cout << "enter the " << infos[i] << ":" << std::endl;
        std::cin  >> buffer;
        if (FunctionArray[i](buffer) == SUCCESS)
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

