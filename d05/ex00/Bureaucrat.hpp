/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:26:53 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/16 08:26:03 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private :
        std::string const name;
        int               grade;
    public:
        /*constructors*/
        Bureaucrat();
        Bureaucrat(const std::string name);
        Bureaucrat(const Bureaucrat& copy);
        /*assignement*/
        Bureaucrat& operator = (const Bureaucrat& copy);
        /*destructor*/
        ~Bureaucrat();
        /*methods*/
};
#endif
//getters for getName() getGrade()
//2 member functions to increment/decrement the grade (if the input is out of range throw an exception as in the constructor)
//overload of the insertion <<