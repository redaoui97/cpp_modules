/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:26:53 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/19 22:57:34 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

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
        std::string     getName();
        int             getGrade();
        void            incremenetGrade();
        void            decrementGrade();
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
#endif
//overload of the insertion <<