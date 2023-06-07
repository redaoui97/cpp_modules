/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:43:03 by rnabil            #+#    #+#             */
/*   Updated: 2023/06/07 18:11:21 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void    fatal_error(std::string msg)
{
    std::cerr << msg << std::endl;
    exit(1);
}

int sed(std::string file_name, std::string word, std::string replacement)
{
    std::ifstream    input_file(file_name);
    std::ofstream   output_file;
    std::string     buffer;
    int             pos;
    
    /*fd protection*/
    if (!input_file)
        fatal_error("Inexistant file "+file_name);
    output_file.open(file_name + ".replace");
    if (!output_file)
        fatal_error("Error creating file");
    
    /*loop through lines of the file*/
    while (std::getline(input_file, buffer))
    {
        while ((pos = buffer.find(word)) != -1 && word != replacement)
        {
            buffer.erase(pos, word.length());
            buffer.insert(pos, replacement);
        }
        output_file << buffer << std::endl;
    }

    /*close the files*/
    output_file.close();
    input_file.close();
    return (0);    
}

int main(int argc, char **argv)
{
    if (argc != 4)
        fatal_error("invalid arguments!");
    sed(argv[1], argv[2], argv[3]);
    return (0);
}
