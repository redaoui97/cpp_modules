/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:15:16 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/27 18:43:28 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class   AForm
{
    private:
        std::string const m_name;
        bool              m_signed;
        int         const m_requiredGradeExecute;
        int         const m_requiredGradeSign;
        
    public:
        /*constructors*/
        AForm();
        AForm(const std::string name, int gradeExecute, int gradeSign);
        AForm(const AForm& copy);
        /*assignement*/
        virtual AForm&          operator=(const AForm& copy);
        /*destructor*/
        virtual                 ~AForm();
        /*methods*/
        virtual void            beSigned(Bureaucrat bcrat);
        virtual std::string     getName() const;
        virtual bool            isSigned() const;
        virtual int             getSignGrade() const;
        virtual int             getExecGrade() const;
        virtual void            execute(const Bureaucrat& executor) const = 0;
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
        class GradeNotSigned : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "Grade is not signed!";
                };
        };
};

//overloading << operator
std::ostream&   operator <<(std::ostream& os, const AForm& frm);

#endif