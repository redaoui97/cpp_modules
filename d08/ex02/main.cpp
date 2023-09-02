/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 00:11:47 by rnabil            #+#    #+#             */
/*   Updated: 2023/09/03 00:22:01 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}
// int main(void)
// {
//     MutantStack<int> mutant;
//     std::stack<int>  stack;

//     //push 3 values into our mutant stack
//     mutant.push(1);
//     mutant.push(2);
//     mutant.push(3);
    
//     //print the values in the stack using the iterators we implemented
//     MutantStack<int>::iterator iter;
//     std::cout << "Mutant stack using iterator:" << std::endl;
//     for (iter = mutant.begin(); iter != mutant.end(); ++iter)
//         std::cout << *iter << std::endl;
    
//     MutantStack<int>::const_iterator const_iter;
//     std::cout << "Mutant stack using const iterator:" << std::endl;
//     for (const_iter = mutant.cbegin(); const_iter != mutant.cend(); ++const_iter)
//         std::cout << *const_iter << std::endl;
    
//     MutantStack<int>::reverse_iterator reverse_iter;
//     std::cout << "Mutant stack using reverse iterator:" << std::endl;
//     for (reverse_iter = mutant.rbegin(); reverse_iter != mutant.rend(); ++reverse_iter)
//         std::cout << *reverse_iter << std::endl;
    
//     MutantStack<int>::const_reverse_iterator const_reverse_iter;
//     std::cout << "Mutant stack using const reverse iterator:" << std::endl;
//     for (const_reverse_iter = mutant.crbegin(); const_reverse_iter != mutant.crend(); ++const_reverse_iter)
//         std::cout << *const_reverse_iter << std::endl;
    
//     //operations on normal stack; adding in reverse because stack is LIFO
//     std::cout << "Normal stack:" << std::endl;
//     stack.push(3);
//     stack.push(2);
//     stack.push(1);
//     while (!stack.empty())
//     {
//         std::cout << stack.top() << std::endl;
//         stack.pop();
//     }  
// }