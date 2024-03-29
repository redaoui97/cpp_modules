/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:04:46 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/24 06:11:34 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

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
        void             signForm(Form& frm);
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