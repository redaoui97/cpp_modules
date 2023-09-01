/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:12:16 by rnabil            #+#    #+#             */
/*   Updated: 2023/09/01 16:40:34 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
void    easyfind(T container, int x)
{ 
    if (std::find(container.begin(), container.end(), x) == container.end())
        throw std::runtime_error("No occurence was found!");
    else
        std::cout << "Found occurence of value : " << x << std::endl;
}
#endif
