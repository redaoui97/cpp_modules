/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 07:23:37 by rnabil            #+#    #+#             */
/*   Updated: 2023/09/04 22:51:50 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/*static functions*/
static std::string removeSpaces(std::string input)
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

static int checkArgs(std::string input)
{
    std::string whitelist = "123456789*+-/";

    for (size_t i = 0; i < input.length(); ++i)
    {
        if (whitelist.find(input[i]) == std::string::npos)//std::string::npos is the highest possible size_t also the negative return value for find
            return (1);
    }
    return (0);
}

static int  toInt(std::string input)
{
    std::istringstream iss(input);
    int                res;

    if (!(iss >> res))
       return (-1);
    return res;
}
/*--------------------*/

RPN::RPN()
{

}

RPN::RPN(std::string params)
{
    std::string args;
    std::string nums = "123456789";
    std::string opers = "*/-+";
    float       lvalue;
    float         rvalue;
    float         result;
    int         first_iter = 1;
        
    args = removeSpaces(params);
    if (checkArgs(args) == 1)
        throw std::runtime_error("error");
    for (size_t i = 0; i < args.length(); ++i)
    {
        if (nums.find(args[i]) != std::string::npos)
        {
            //if number push it into the stack
            m_values.push(toInt(std::string("")+args[i]));
        }
        else
        {
            if (m_values.empty())
                throw std::runtime_error("error");
            if (first_iter == 1 && (nums.find(m_values.top()) != std::string::npos))
                throw std::runtime_error("error");
            if (m_values.size() >= 2)
            {
                rvalue = m_values.top();
                m_values.pop();
                lvalue = m_values.top();
                m_values.pop();
                if (args[i] == '+')
                    result = lvalue + rvalue;
                else if (args[i] == '-')
                    result = lvalue - rvalue;
                else if (args[i] == '*')
                    result = lvalue * rvalue;
                else if (args[i] == '/')
                    result = lvalue / rvalue;
            }
            else
                throw std::runtime_error("error");
            m_values.push(result);
            //if operator pop from stack, calculate then push back into the stack
        }
    }
    if (m_values.size() != 1)
        throw std::runtime_error("error");
    std::cout << m_values.top() << std::endl;
}

RPN::RPN(const RPN& copy)
{
    *this = copy;
}

RPN& RPN::operator=(const RPN& copy)
{
    if (this != &copy)
        m_values = copy.m_values;
    return (*this);
}

RPN::~RPN()
{
    
}