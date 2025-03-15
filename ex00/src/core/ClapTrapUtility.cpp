/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapUtility.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 23:32:56 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/15 01:13:47 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/ClapTrap.hpp"
#include <iostream>
#include <sstream>

void ClapTrap::attack(const std::string& target) {
  if (!this->m_hitPoints) {
    return log("attack: ClapTrap " + this->m_name + " is dead!");
  }
  if (!this->m_energyPoints) {
    return log("attack: ClapTrap " + this->m_name + " has no energy!");
  }

  std::ostringstream attackDamageStr;

  attackDamageStr << this->m_attackDamage;
  log("ClapTrap " + this->m_name +
      " attacks " + (target.empty() ? "unnamed" : target) +
      ", causing " + attackDamageStr.str() + " points of damage!");
  this->m_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (this->m_hitPoints) {
    std::ostringstream amountStr;

    amountStr << (amount < this->m_hitPoints ? amount : this->m_hitPoints);
    log("ClapTrap " + this->m_name +
        " take a damage of " + amountStr.str() + " points of damage!");
    this->m_hitPoints = amount >= this->m_hitPoints ? static_cast<unsigned int>(DEATH) : this->m_hitPoints - amount;
  }

  if (!this->m_hitPoints)
    log("takeDamage : ClapTrap " + this->m_name + " is dead!");
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (!this->m_hitPoints) {
    return log("beRepaired: ClapTrap " + this->m_name + " is dead!");
  }
  if (!this->m_energyPoints) {
    return log("beRepaired: ClapTrap " + this->m_name + " has no energy!");
  }
  std::ostringstream amountStr;

  amountStr << amount;
  log("ClapTrap " + this->m_name +
      " repaired " + amountStr.str() + " hit points!");
  this->m_hitPoints += amount;
  this->m_energyPoints--;
}

void ClapTrap::log(const std::string& str) const {
  std::cout << str << std::endl;
}
