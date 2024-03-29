/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 23:47:28 by rnabil            #+#    #+#             */
/*   Updated: 2023/08/29 20:59:18 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <cfloat>

class ScalarConverter
{
    public:
        static void Convert(std::string input);
};

void    toChar(std::string input);
void    toInt(std::string input);
void    toFloat(std::string input);
void    toDouble(std::string input);
#endif
