/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 23:06:49 by rnabil            #+#    #+#             */
/*   Updated: 2023/09/05 10:06:17 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <vector>
#include <deque>
#include <ctime>

class PmergeMe
{
    private:
        std::vector<int> m_vectorContainer;
        std::deque<int>  m_dequeContainer;
        int              m_threshold;
    
    public:
        PmergeMe();
        PmergeMe(char **args, int num);
        PmergeMe(const PmergeMe& copy);
        PmergeMe& operator=(const PmergeMe& copy);
        ~PmergeMe();
        //other methods
        void fillVector(char **args, int num);
        void printVector();
        void InsertSortVector(std::vector<int>& vector, int low, int high);
        void mergeVector(std::vector<int>& vector, int left, int middle, int right);
        void sortVector(std::vector<int>& vector, int low, int high);
        //deque
        void fillDeque(char **args, int num);
        void InsertSortDeque(std::deque<int>& deque, int low, int high);
        void mergeDeque(std::deque<int>& deque, int left, int middle, int right);
        void sortDeque(std::deque<int>& deque, int low, int high);
        
};

#endif