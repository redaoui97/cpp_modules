/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:07:03 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/27 14:02:44 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private :
        std::string const m_name;
        int               m_grade;
        
    public:
        /*constructors*/
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat& copy);
        /*assignement*/
        Bureaucrat& operator = (const Bureaucrat& copy);
        /*destructor*/
        ~Bureaucrat();
        /*methods*/
        std::string      getName() const;
        int              getGrade() const;
        void             incremenetGrade();
        void             decrementGrade();
        void             signForm(AForm& frm);
        void             executeForm(const AForm& form);
        /*nested custom exception class*/
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
std::ostream&   operator <<(std::ostream& os, const Bureaucrat& copy);

#endif