/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:49:15 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/12 00:09:37 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <cstdlib>

static void generateAnimals(Animal **AnimalArray)
{
    int i = 0;

    while (i < 20)
    {
        std::cout << "Animal number : " << i + 1 << std::endl;
        std::cout << "------------------------------" << std::endl << std::endl;
        i % 2 ? (AnimalArray[i] = new Cat, i++) : (AnimalArray[i] = new Dog, i++);
    }
}

static void deleteAnimals(Animal **AnimalArray)
{
    int i = 0;

    while (i < 20)
        delete AnimalArray[i++];
}

int main()
{
    Animal  *AnimalArray[20];
    
    generateAnimals(AnimalArray);
    deleteAnimals(AnimalArray);
    return 0;
}