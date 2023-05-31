/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:38:59 by rnabil            #+#    #+#             */
/*   Updated: 2023/05/30 16:29:38 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#define MAX_CONTACTS 8

class   PhoneBook
{
    private:
        Contact m_contacts[MAX_CONTACTS];
        Contact *m_firstContact;
        
    public:
        PhoneBook();
        ~PhoneBook();
        Contact *SearchContact();
        void    PrintContacts();
        void    AddContact();
        void    FreeAndExit();
};
#endif