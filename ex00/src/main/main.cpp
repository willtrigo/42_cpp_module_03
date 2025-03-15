/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 22:48:12 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/15 01:34:02 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/ClapTrap.hpp"
#include <cstdlib>

int main() {
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
  bestPractice.takeDamage(20);
  return EXIT_SUCCESS;
}
