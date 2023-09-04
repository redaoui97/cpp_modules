/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 07:23:07 by rnabil            #+#    #+#             */
/*   Updated: 2023/09/04 08:21:48 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <stack>

class RPN
{
    private:
        std::stack<int> m_values;
            
    public:
        RPN();
        RPN(std::string params);
        RPN(const RPN& copy);
        RPN& operator=(const RPN& copy);
        ~RPN();
};
#endif