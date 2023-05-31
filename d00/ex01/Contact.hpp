/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:38:55 by rnabil            #+#    #+#             */
/*   Updated: 2023/05/30 15:45:48 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
    private:
        int         id;
        std::string m_firstName;
        std::string m_lastName;
        std::string m_phoneNumber;
        std::string m_darkestSecret;
    public:
        Contact();
        ~Contact();
        void    printInfos();
        void    setInfos();
};
#endif