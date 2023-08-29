/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:21:50 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/29 22:50:33 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t   Serializer::serialize(Data* ptr)
{
    if (ptr)
        return (reinterpret_cast<uintptr_t>(ptr));
    return (0);
}

Data*   Serializer::deserialize(uintptr_t src)
{
    if (src)
        return (reinterpret_cast<Data*>(src));
    return (NULL);
}