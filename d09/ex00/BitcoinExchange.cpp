/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 06:11:53 by rnabil            #+#    #+#             */
/*   Updated: 2023/09/04 07:15:00 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    
}

BitcoinExchange::BitcoinExchange(std::string input)
{
    std::string errorMessage;
    
    //check if the data.csv file is present and store it's content in m_data
    if (setData() == 1)
        throw std::runtime_error("data.csv is unreachable!");
    //check that file exists and ends with .txt
    //check file header is valid
    //accepts empty lines
    //accepts spaces in between date; values
    errorMessage =  parseInput(input);
    if (!errorMessage.empty())
        throw std::runtime_error(errorMessage);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
    *this = copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& copy)
{
    if (this != &copy)
        m_data = copy.m_data;
    return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
    
}

//static function
static void splitData(std::string& input, std::string& date, std::string& value, char sep)
{
    std::istringstream  iss(input);

    std::getline(iss, date, sep) && std::getline(iss, value);
}

static float toFloat(std::string input)
{
    std::istringstream iss(input);
    float              res;

    iss >> res;
    return res;
}

static int  toInt(std::string input)
{
    std::istringstream iss(input);
    int                 res;

    if (!(iss >> res))
       return (-1);
    return res;
}

std::string removeSpaces(std::string input)
{
    std::string res;

    for (size_t i = 0; i < input.length(); ++i)
    {
        if (input[i] != ' ')
        {
            res += input[i];
        }
    }

    return res;
}

int checkValidDate(std::string date)
{
    std::string syear;
    std::string smonth;
    std::string sday;
    int         year;
    int         month;
    int         day;
    std::string perm;
    
    splitData(date, syear, perm, '-');
    splitData(perm, smonth, sday, '-');
    year = toInt(syear);
    month = toInt(smonth);
    day = toInt(sday);
    if (year == -1 || month == -1 || day == -1)
        return (1);
    //year checks
    if (year < 2009 || year > 2023)
        return (1);
    //month checks
    if (month < 1 || month > 12)
        return (1);
    //day checks
    if (day < 1 || day > 31)
        return (1);
    return (0);
}

static std::string checkValidValue(std::string value)
{
    std::istringstream iss(value);
    float floatValue;

    //std::cout << "test " << iss.str() << std::endl;
    if (!(iss >> floatValue))
        return ("invalid value");
    if (floatValue < 0)
        return ("not a positive number");
    if (floatValue > 1000)
        return ("too large number");
    return ("0");
}
//+-----------------------------------+

float BitcoinExchange::calculateValue(std::string svalue, std::string date)
{
    float   res;
    
    res = toFloat(svalue);
    std::map<std::string, float>::iterator it = m_data.lower_bound(date);
    if (it != m_data.end() && it->first == date)
    {
        return(res * it->second);
    } 
    else 
    {
        if (it != m_data.begin())
        {
            --it;
        }
        return(res * it->second);
    }
    return (-1);
}

void BitcoinExchange::printData()
{
    std::map<std::string, float>::iterator it;
    
    for (it = m_data.begin(); it != m_data.end(); ++it)
    {
        std::cout << "Value for key " << it->first << ": " << it->second << std::endl;
    }
}

void    BitcoinExchange::parseLine(std::string line)
{
    std::string date;
    std::string value;
    std::string msg;
    
    splitData(line, date, value, '|');
    date = removeSpaces(date);
    value = removeSpaces(value);
    if (checkValidDate(date) == 1)
    {
        std::cout << "Error: bad input => " << date << std::endl;
    }
    else if ((msg = checkValidValue(value)) != "0")
    {
        std::cout << "Error: " << msg << " \"" << value << "\"" << std::endl;
    }
    else
    {
        float res = calculateValue(value, date);
        std::cout << date << " => " << value << " = " << res << std::endl;
    }
}

std::string  BitcoinExchange::parseInput(std::string input)
{
    std::ifstream   inputFile(input);
    std::string     line;
    int             firstIter = 1;


    if (!inputFile.is_open())
        return ("could not open file!");
    if (input.length() >= 4 && input.substr(input.length() - 4) != ".txt")
        return ("invalid input file extension!");
    while (std::getline(inputFile, line))
    {
        if (firstIter)
        {
            if (removeSpaces(line) != "date|value")
                return ("bad file header!");
            firstIter = 0;
            continue ;
        }
        if (line.empty())
            continue ;
        parseLine(line);
    }
    inputFile.close();
    return ("");
}

int  BitcoinExchange::setData()
{
    std::ifstream   inputFile("data.csv");
    std::string     line;
    std::string     stringTime;
    std::string     stringValue;

    if (!inputFile.is_open())
        return (1);

    while (std::getline(inputFile, line))
    {
        splitData(line, stringTime, stringValue, ',');
        if (stringTime == "date")
            continue ;
        m_data[stringTime] = toFloat(stringValue);
    }
    inputFile.close();
    return (0);
}