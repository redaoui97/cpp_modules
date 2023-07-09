/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnabil <rnabil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:05:28 by rnabil            #+#    #+#             */
/*   Updated: 2023/07/09 01:45:03 by rnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main(void)
{
  FragTrap  obj1;
  FragTrap  obj2("robot");
  FragTrap  obj3(obj2);    
  int       i = 0;
  
  obj3.highFivesGuys();
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