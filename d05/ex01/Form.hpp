/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:53:10 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/20 20:07:21 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class   Form
{
    private:
        std::string const m_name;
        bool              m_signed;
        int               m_requiredGradeSign;
        int               m_requiredGradeExecute;
        
    public:
        /*constructors*/
        Form();
        Form(const std::string name, int gradeSign, int gradeExecute);
        Form(const Form& copy);
        /*assignement*/
        Form& operator=(const Form& copy);
        /*destructor*/
        ~Form();
};

#endif