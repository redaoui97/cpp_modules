/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 00:11:52 by rnabil            #+#    #+#             */
/*   Updated: 2023/09/03 00:06:04 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack() : std::stack<T, Container>(){}
        MutantStack(const MutantStack &copy) : std::stack<T, Container>(copy){*this = copy;}
        MutantStack& operator=(const MutantStack& copy){(this!=&copy ? std::stack<T, Container>::operatr=(copy) : 0); return (*this);}
        ~MutantStack(){}
    
        //type definition for iterators
        typedef typename std::stack<T, Container>::container_type::iterator iterator; 
        typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;
        
        //linking custom iterator calls-
        iterator begin(){return this->c.begin();}
        iterator end(){return this->c.end();}
        
        reverse_iterator rbegin(){return this->c.rbegin();}
        reverse_iterator rend(){return this->c.rend();}

        const_iterator cbegin() const {return this->c.cbegin();}
        const_iterator cend() const {return this->c.cend();}

        const_reverse_iterator crbegin() const {return this->c.crbegin();}
        const_reverse_iterator crend() const {return this->c.crend();}
};

#endif