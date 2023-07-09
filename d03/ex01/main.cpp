/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:05:28 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/09 01:25:15 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
  ScavTrap  obj1;
  ScavTrap  obj2("robot");
  ScavTrap  obj3(obj2);    
  int       i = 0;
  
  obj3.guardGate();
  while (i < DEFAULT_ENERGYPOINTS && !obj2.isDead())
  {
      std::cout << std::endl << std::endl;
      obj1.attack("obj2");
      obj2.takeDamage(DEFAULT_ATTACKDAMAGE);
      obj2.beRepaired(DEFAULT_REPAIR);
      i += DEFAULT_ACTION_COST;
  }
  std::cout << std::endl << std::endl;
  return (0);
}