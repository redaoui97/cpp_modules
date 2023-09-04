/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 06:11:49 by rnabil            #+#    #+#             */
/*   Updated: 2023/09/04 06:57:04 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <fstream>
#include <iostream>
#include <sstream>

class BitcoinExchange
{
    private:
        std::map<std::string, float> m_data;
    
    public:
        BitcoinExchange();
        BitcoinExchange(std::string input);
        BitcoinExchange(const BitcoinExchange& copy);
        BitcoinExchange& operator=(const BitcoinExchange& copy);
        ~BitcoinExchange();
        //public methods
        std::string     parseInput(std::string input);
        float           calculateValue(std::string value, std::string date);
        void            printData();
        void            parseLine(std::string line);
        int             setData();
};
#endif