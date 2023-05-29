/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 21:14:34 by rnabil            #+#    #+#             */
/*   Updated: 2023/05/29 11:53:27 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string upper(std::string input)
{
	std::string	res;
	int			i;
	
	for (i = 0; i < (int)input.length(); i++)
		res += std::toupper(input[i]);
	return (res);
}

int main(int argc, char **argv)
{
	int	i;
	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (i = 1; i < argc; i++)
		std::cout << upper(argv[i]);
	std::cout << std::endl;
	return (0);
}
