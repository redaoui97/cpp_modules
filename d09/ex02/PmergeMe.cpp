/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 23:07:17 by rnabil            #+#    #+#             */
/*   Updated: 2023/09/05 10:07:47 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/*Static utils functions*/
static int toInt(const std::string& str)
{
    std::istringstream  iss(str);
    int                 intValue = 0;

    if (!(iss >> intValue))
        throw std::runtime_error("not an integer: " + str);

    return intValue;
}

/*----------------*/
PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(char **args, int num) : m_threshold(5)
{
    fillVector(args, num);
    fillDeque(args, num);
    clock_t	Start;
    clock_t Finish;
	double	sortTimeVector;
    double  sortTimeDeque;
    
    std::cout << "Before : ";
    printVector();
    
    //start timer for vector
    Start = clock();
    sortVector(m_vectorContainer, 0, m_vectorContainer.size() - 1);
    Finish = clock();
    sortTimeVector = Finish - Start;
    
    
    //start timer for deque
    Start = clock();
    sortDeque(m_dequeContainer, 0, m_dequeContainer.size() - 1);
    Finish = clock();
    sortTimeDeque = Finish - Start;
    
    std::cout << "After : ";
    printVector();
    std::cout << "Time to process a range of " << m_vectorContainer.size() << " elements with std::vector : " << sortTimeVector << " us" << std::endl;
    std::cout << "Time to process a range of " << m_dequeContainer.size() << " elements with std::deque : " << sortTimeDeque << " us" << std::endl; 
     
}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
    *this = copy;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& copy)
{
    if (this != &copy)
    {
        this->m_dequeContainer = copy.m_dequeContainer;
        this->m_vectorContainer = copy.m_vectorContainer;   
    }
    return (*this);
}

PmergeMe::~PmergeMe()
{
    
}

/*methods*/

void PmergeMe::printVector()
{
    for (int i = 0; i < static_cast<int>(m_vectorContainer.size()); i++)
    {
        std::cout << m_vectorContainer.at(i) << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::fillVector(char **args, int num)
{
    for (int i = 1; i <= num; i++)
    {
        this->m_vectorContainer.push_back(toInt(args[i]));
    }
}

/*vector sorting*/
/*------------------------------------------------------*/
/*------------------------------------------------------*/
void    PmergeMe::InsertSortVector(std::vector<int>& Vector, int low, int high)
{
    std::vector<int>::iterator it = Vector.begin() + low;
    std::vector<int>::iterator it2;
    
    if (!(low - high))
        return;
    while (it != (Vector.begin() + high + 1))
    {
        it2 = it;
        while (it2 != (Vector.begin() + low))
        {
            if (*it2 < *(it2 - 1))
                std::iter_swap(it2, it2 -1);
            it2--;
        }
        it++;
    }
}

void PmergeMe::mergeVector(std::vector<int>& Vector, int low, int middle, int high)
{
    std::vector<int>::iterator it;
    std::vector<int>::iterator itA;
    std::vector<int>::iterator itB;
    
    std::vector<int> A(Vector.begin() + low, Vector.begin() + middle + 1);
    std::vector<int> B(Vector.begin() + middle + 1, Vector.begin() + high + 1);
    it = Vector.begin() + low;
    itA = A.begin();
    itB = B.begin();
    // Keep pushing lowest values of A and B into vector until A or B is empty
    while (itA != A.end() && itB != B.end())
    {
        if (*itA < *itB)
        {
            *it = *itA;
            ++itA;
        }
        else
        {
            *it = *itB;
            ++itB;
        }
        ++it;
    }
    // If A isn't empty: keep pushing its sorted values into vector
    while (itA != A.end())
    {
        *it = *itA;
        ++itA;
        ++it;
    }
    // If B isn't empty: keep pushing its sorted values into vector
    while (itB != B.end())
    {
        *it = *itB;
        ++itB;
        ++it;
    }
}

void    PmergeMe::sortVector(std::vector<int>& Vector, int low, int high)
{
    if (high - low > this->m_threshold)
    {
        int middle = (high + low) / 2;
        sortVector(Vector, low, middle);
        sortVector(Vector, middle + 1, high);
        mergeVector(Vector, low, middle, high);
    }
    else
        InsertSortVector(Vector, low, high);
}



/*Deque part*/
void PmergeMe::fillDeque(char **args, int num)
{
    for (int i = 1; i <= num; i++)
    {
        this->m_dequeContainer.push_back(toInt(args[i]));
    }
}

void    PmergeMe::InsertSortDeque(std::deque<int>& Deque, int low, int high)
{
    std::deque<int>::iterator it = Deque.begin() + low;
    std::deque<int>::iterator it2;
    
    if (!(low - high))
        return;
    while (it != (Deque.begin() + high + 1))
    {
        it2 = it;
        while (it2 != (Deque.begin() + low))
        {
            if (*it2 < *(it2 - 1))
                std::iter_swap(it2, it2 -1);
            it2--;
        }
        it++;
    }
}

void PmergeMe::mergeDeque(std::deque<int>& Deque, int low, int middle, int high)
{
    std::deque<int>::iterator it;
    std::deque<int>::iterator itA;
    std::deque<int>::iterator itB;
    
    std::deque<int> A(Deque.begin() + low, Deque.begin() + middle + 1);
    std::deque<int> B(Deque.begin() + middle + 1, Deque.begin() + high + 1);
    it = Deque.begin() + low;
    itA = A.begin();
    itB = B.begin();
    // Keep pushing lowest values of A and B into Deque until A or B is empty
    while (itA != A.end() && itB != B.end())
    {
        if (*itA < *itB)
        {
            *it = *itA;
            ++itA;
        }
        else
        {
            *it = *itB;
            ++itB;
        }
        ++it;
    }
    // If A isn't empty: keep pushing its sorted values into Deque
    while (itA != A.end())
    {
        *it = *itA;
        ++itA;
        ++it;
    }
    // If B isn't empty: keep pushing its sorted values into Deque
    while (itB != B.end())
    {
        *it = *itB;
        ++itB;
        ++it;
    }
}

void    PmergeMe::sortDeque(std::deque<int>& Deque, int low, int high)
{
    if (high - low > this->m_threshold)
    {
        int middle = (high + low) / 2;
        sortDeque(Deque, low, middle);
        sortDeque(Deque, middle + 1, high);
        mergeDeque(Deque, low, middle, high);
    }
    else
        InsertSortDeque(Deque, low, high);
}