/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:44:54 by rnabil            #+#    #+#             */
/*   Updated: 2023/09/01 20:27:13 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <deque>
#include <ctime>

class Span
{
    private:
        unsigned int         m_max;
        std::deque<int>      m_container;
        
    public:
        //orthodox canonical form
        Span();
        Span(unsigned int N);
        Span(const Span& copy);
        ~Span();
        Span& operator=(const Span& copy);
        //public methods
        void    printValues();
        void    addNumber(int num);
        unsigned int     shortestSpan();
        unsigned int     longestSpan();
};
#endif

//method : addNumber() : adds a single number to the Span (if there are more than N: throw an exception)
//method : shortestSpan() : find the shortest span between numbers stored (if one or no numbers stored: throw exception)
//method : longestSpan() : find the shortest span between numbers stored (if one or no numbers stored: throw exception)
