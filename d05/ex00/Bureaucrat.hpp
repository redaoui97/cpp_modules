/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:26:53 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/15 18:34:09 by rnabil           ###   ########.fr       */
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
}
#endif