/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:23:26 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/11 15:28:19 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# define MAX_IDEAS 100

class Brain
{
    protected:
        std::string ideas[MAX_IDEAS];
    public:
        //constructors
        Brain();
        Brain(const Brain& copy);
        //assignement operators
        Brain&  operator = (const Brain& copy);
        //destructor
        ~Brain();
};

#endif