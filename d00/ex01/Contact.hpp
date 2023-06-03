/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:38:55 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/03 19:41:29 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
    private:
        int         m_id;
        std::string m_firstName;
        std::string m_lastName;
        std::string m_phoneNumber;
        std::string m_darkestSecret;
    public:
        Contact();
        ~Contact();
        Contact(int id, std::string firstName, std::string lastName, std::string phoneNumber, std::string darkestSecret);
        void    setInfos(int id, std::string firstName, std::string lastName, std::string phoneNumber, std::string darkestSecret);
};
#endif