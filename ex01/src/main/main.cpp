/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 02:44:36 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/20 10:53:02 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/claptrap/ClapTrap.hpp"
#include "core/scavtrap/ScavTrap.hpp"
#include <cstdlib>
#include <iostream>

int main() {
  {
    ClapTrap bestPractice("42");

    bestPractice.attack("you");
    bestPractice.attack("");
    bestPractice.attack("you");
    bestPractice.attack("you");
    bestPractice.attack("you");
    bestPractice.attack("you");
    bestPractice.beRepaired(5);
    bestPractice.beRepaired(5);
    bestPractice.attack("you");
    bestPractice.attack("you");
    bestPractice.attack("you");
    bestPractice.takeDamage(1);
    bestPractice.takeDamage(1);
    bestPractice.beRepaired(5);
    bestPractice.takeDamage(20);
    bestPractice.beRepaired(1);
    bestPractice.attack("you");
    bestPractice.takeDamage(20);
  }
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    ScavTrap bestPractice("42");
    bestPractice.guardGate();
    bestPractice.attack("you");
    bestPractice.attack("");
    bestPractice.attack("you");
    bestPractice.attack("you");
    bestPractice.attack("you");
    bestPractice.attack("you");
    bestPractice.beRepaired(5);
    bestPractice.beRepaired(5);
    bestPractice.attack("you");
    bestPractice.attack("you");
    bestPractice.attack("you");
    bestPractice.takeDamage(50);
    bestPractice.takeDamage(1);
    bestPractice.takeDamage(1);
    bestPractice.beRepaired(5);
    bestPractice.takeDamage(50);
    bestPractice.beRepaired(1);
    bestPractice.attack("you");
    bestPractice.takeDamage(50);
    bestPractice.guardGate();
    bestPractice.beRepaired(1);
    bestPractice.attack("you");
  }
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    ClapTrap* clap = new ClapTrap("42");
    ScavTrap* scav = new ScavTrap("bocal");
    ClapTrap* scav2 = new ScavTrap("staff");

    clap->attack("you");
    scav->attack("you");
    scav2->attack("you");

    delete clap;
    delete scav;
    delete scav2;
  }
  return EXIT_SUCCESS;
}
