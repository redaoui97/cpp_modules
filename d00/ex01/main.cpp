/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:54:16 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/03 22:59:34 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

static void print_header(void)
{
    std::cout << "_____  _    _  ____  _   _ ______      ____   ____   ____  _  __" << std::endl;
    std::cout << "|  __ \\| |  | |/ __ \\| \\ | |  ____|    |  _ \\ / __ \\ / __ \\| |/ /" << std::endl;
    std::cout << "| |__) | |__| | |  | |  \\| | |__ ______| |_) | |  | | |  | | ' /" << std::endl;
    std::cout << "|  ___/|  __  | |  | | . ` |  __|______|  _ <| |  | | |  | |  <" << std::endl;
    std::cout << "| |    | |  | | |__| | |\\  | |____     | |_) | |__| | |__| | . \\" << std::endl;
    std::cout << "|_|    |_|  |_|\\____/|_| \\_|______|    |____/ \\____/ \\____/|_|\\_\\" << std::endl << std::endl;
    std::cout << " ---------------------------------------------" << std::endl;
    std::cout << "|               PHONEBOOK APP                 |" << std::endl;
    std::cout << " ---------------------------------------------" << std::endl;
    std::cout << "|        *** Command Line Phonebook ***       |" << std::endl;
    std::cout << "|             *ADD*    Contact                |" << std::endl;
    std::cout << "|             *SEARCH* Contact                |" << std::endl;
    std::cout << "|                  *EXIT*                     |" << std::endl;
    std::cout << " ---------------------------------------------" << std::endl;
}

int main(void)
{
    PhoneBook   book;
    std::string buffer;
    
    print_header();
    while(69)
    {
        std::cout << "Enter a command:";
        std::getline(std::cin, buffer);
        if (buffer == "ADD")
            book.AddContact();
        else if(buffer == "SEARCH")
            book.SearchContact();
        else if (buffer == "EXIT")
            book.FreeAndExit();  
    }
    return (0);
}