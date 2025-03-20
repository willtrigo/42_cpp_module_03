/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 09:24:41 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/20 11:42:54 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/claptrap/ClapTrap.hpp"
#include "core/fragtrap/FragTrap.hpp"
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
    FragTrap bestPractice("42");
    bestPractice.highFivesGuys();
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
    bestPractice.highFivesGuys();
    bestPractice.beRepaired(1);
    bestPractice.attack("you");
  }
  std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
  {
    ClapTrap* clap = new ClapTrap("Clappy");
    ScavTrap* scav = new ScavTrap("Scavvy");
    ClapTrap* scav2 = new ScavTrap("Scavvy");
    ClapTrap* frag = new FragTrap("student");

    clap->attack("Target");
    scav->attack("Target");
    scav2->attack("Target");
    frag->attack("Target");

    delete clap;
    delete scav;
    delete scav2;
    delete frag;
  }
  return EXIT_SUCCESS;
}
