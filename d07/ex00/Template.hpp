/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:12:56 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/30 21:38:20 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>

template <typename type>
void     swap(type& arg1, type& arg2)
{
    type    swapVar;
    
    swapVar = arg1;
    arg1 = arg2;
    arg2 = swapVar; 
}

template <typename type>
type    min(type arg1, type arg2)
{
    return (arg1 >= arg2 ? arg2 : arg1);
}

template <typename type>
type    max(type arg1, type arg2)
{
    return (arg1 > arg2 ? arg1 : arg2);
}

#endif