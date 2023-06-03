/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:38:55 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/04 00:49:15 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
    private:
        std::string m_id;
        std::string m_nickname;
        std::string m_firstName;
        std::string m_lastName;
        std::string m_phoneNumber;
        std::string m_darkestSecret;
    public:
        Contact();
        ~Contact();
        void    setInfos(std::string id, std::string nickname, std::string firstName, std::string lastName, std::string phoneNumber, std::string darkestSecret);
        void    fetchData(std::string *id, std::string *firstName, std::string *phoneNumber, std::string *lastName, std::string *darkestSecret, std::string *nickname);
        void    printData();
};
#endif