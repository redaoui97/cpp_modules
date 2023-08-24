/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:53:10 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/24 05:59:13 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class   Form
{
    private:
        std::string const m_name;
        bool              m_signed;
        int         const m_requiredGradeExecute;
        int         const m_requiredGradeSign;
        
    public:
        /*constructors*/
        Form();
        Form(const std::string name, int gradeExecute, int gradeSign);
        Form(const Form& copy);
        /*assignement*/
        Form& operator=(const Form& copy);
        /*destructor*/
        ~Form();
        /*methods*/
        void            beSigned(Bureaucrat bcrat);
        std::string     getName() const;
        bool            isSigned() const;
        int             getSignGrade() const;
        int             getExecGrade() const;
        /*nested custom exceptions*/
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "Grade is too high!";
                };
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "Grade is too low!";
                };
        };
};

//overloading << operator
std::ostream&   operator <<(std::ostream& os, const Form& frm);

#endif