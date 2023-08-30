/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 22:24:25 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/30 23:49:39 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template <typename T>
class Array
{
    private:
        unsigned int m_length;
        T            *m_array;
    public:
        //default constructor; generates empty array
        Array() : m_length(0), m_array(new T[m_length]){}
        //parametrized constructor; generates array of length n
        Array(unsigned int n) : m_length(n), m_array(new T[n]){}
        //copy constructor; generates array of length copy.length and copies values from array 
        Array(const Array& copy) : m_length(copy.m_length), m_array(new T[m_length])
        {
            int i = 0;

            while (i < static_cast<int>(m_length))
            {
                m_array[i] = copy.m_array[i];
                i++;
            }
        }
        //copy assignement operator; deletes current array and makes a new array of size copy.length
        Array&  operator=(const Array& copy)
        {
            int i = 0;
            
            if (this != &copy)
            {
                if (this->m_array)
                    delete [] m_array;
                m_length = copy.m_length;
                m_array = new T[m_length];
                while (i < static_cast<int>(m_length))
                {
                    m_array[i] = copy.m_array[i];
                    i++;
                }                    
            }
            return (*this);
        }
        //destructor; deletes array and object's destruction
        ~Array() 
        {
            if (m_array)
                delete[] m_array;
        }
        //methods that returns the size of the array
        int size()
        {
            return (m_length);
        }
        //overload of the [] operator; returns the value of the corresponding array value in a certain position
        T& operator[](unsigned int pos)
        {
            pos >= m_length ? throw std::runtime_error("Index is out of bounds") : 0;
            return (m_array[pos]);
        }
};


#endif