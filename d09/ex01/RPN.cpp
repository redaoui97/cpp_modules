/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 07:23:37 by rnabil            #+#    #+#             */
/*   Updated: 2023/09/04 09:10:12 by rnabil           ###   ########.fr       */
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
    int         res = -1;
    int         first_iter = 1;
    int         second_iter;
    
    args = removeSpaces(params);
    if (checkArgs(args) == 1)
        throw std::runtime_error("error");
    for (size_t i = 0; i < args.length(); ++i)
    {
        if (nums.find(args[i]) != std::string::npos)
        {
            if (first_iter)
            {
                res = toInt(std::string("")+args[i]);
                first_iter = 0;
            }
            else
            {
                //if number push it into the stack
                m_values.push(toInt(std::string("")+args[i]));
            }
        }
        else
        {
            if (m_values.empty())
                throw std::runtime_error("error");
            if (first_iter == 1 && res == -1)
                throw std::runtime_error("error");
            second_iter = 1;
            while (!m_values.empty())
            {
                /*
                            Some shit here is broken
                                            
                */
                //std::cout << m_values.size() << " did operation " << args[i] << " on " << res << " and " << m_values.top() << std::endl;
                // if (second_iter == 1)
                // {
                //     res = m_values.top();
                //     m_values.pop();
                //     second_iter = 0;
                //     continue ;
                // }
                if (args[i] == '+')
                    res += m_values.top();
                else if (args[i] == '-')
                    res -= m_values.top();
                else if (args[i] == '*')
                    res *= m_values.top();
                else if (args[i] == '/')
                    res /= m_values.top();
                m_values.pop();
            }
            m_values.push(res);
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