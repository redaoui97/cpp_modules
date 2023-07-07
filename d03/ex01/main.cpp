/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:05:28 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/07 22:13:06 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
  ScavTrap  obj1;
  ScavTrap  obj2("robot");
  ScavTrap  obj3(obj2);    
  
  /*In this scenario, I'll just show how inherited methods,
       and implicit methods are called*/
  obj2.attack("robot2");
  return (0);
}