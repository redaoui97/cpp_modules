/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:38:59 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/05 14:57:10 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#define MAX_CONTACTS 8
#define SUCCESS 0
#define FAILURE 1

class   PhoneBook
{
    private:
        Contact m_contacts[MAX_CONTACTS];
        Contact *m_firstContact;
        int     m_availableContactIndex;
        int     m_contactNumber;
        
    public:
        PhoneBook();
        ~PhoneBook();
        void    AddContact();
        void    FreeAndExit();
        void    PrintContacts();
        void    SearchContact();
        int	    SelectContact();
        int     SetCurrentContact();
};
#endif