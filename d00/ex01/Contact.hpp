/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:38:55 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/05 14:53:42 by rnabil           ###   ########.fr       */
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
        void    printData();
        void    PrintAllData();
        void    setInfos(std::string id, std::string nickname, std::string firstName, std::string lastName, std::string phoneNumber, std::string darkestSecret);
};
#endif