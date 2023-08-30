/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 21:42:53 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/30 22:23:02 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void     iter(T *array, T length, void (*func)(const T, const T))
{
    T   i = 0;

    while (i < length)
    {
        func(array[i], 100);
        i++;
    }
}

/*Example templates*/

template <typename type>
void    compare(type arg1, type arg2)
{
    arg1 > arg2 ? (std::cout << arg1 << " is superior to " << arg2) : (std::cout << arg1 << " is inferior to " << arg2);
    std::cout << std::endl;
}

#endif
