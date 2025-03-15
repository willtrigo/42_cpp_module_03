/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapUtility.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 02:47:29 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/15 04:11:11 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/claptrap/ClapTrap.hpp"
#include "utils/TerminalColor.hpp"
#include <iostream>
#include <sstream>

void ClapTrap::attack(const std::string& target) {
  this->m_bgColor = BG_RESET;
  if (!this->m_hitPoints) {
    this->m_strColor = RED;
    return log("attack: ClapTrap " + this->m_name + " is dead!");
  }
  if (!this->m_energyPoints) {
    this->m_strColor = BLUE;
    return log("attack: ClapTrap " + this->m_name + " has no energy!");
  }

  std::ostringstream attackDamageStr;

  this->m_strColor = YELLOW;
  attackDamageStr << this->m_attackDamage;
  log("ClapTrap " + this->m_name +
      " attacks " + (target.empty() ? "unnamed" : target) +
      ", causing " + attackDamageStr.str() + " points of damage!");
  this->m_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
  this->m_bgColor = BG_RESET;
  if (this->m_hitPoints) {
    std::ostringstream amountStr;

    this->m_strColor = ORANGE;
    amountStr << (amount < this->m_hitPoints ? amount : this->m_hitPoints);
    log("ClapTrap " + this->m_name +
        " take a damage of " + amountStr.str() + " points of damage!");
    this->m_hitPoints = amount >= this->m_hitPoints ? static_cast<unsigned int>(DEATH) : this->m_hitPoints - amount;
  }

  if (!this->m_hitPoints) {
    this->m_strColor = RED;
    log("takeDamage : ClapTrap " + this->m_name + " is dead!");
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  this->m_bgColor = BG_RESET;
  if (!this->m_hitPoints) {
    this->m_strColor = RED;
    return log("beRepaired: ClapTrap " + this->m_name + " is dead!");
  }
  if (!this->m_energyPoints) {
    this->m_strColor = BLUE;
    return log("beRepaired: ClapTrap " + this->m_name + " has no energy!");
  }
  std::ostringstream amountStr;

  this->m_strColor = GREEN;
  amountStr << amount;
  log("ClapTrap " + this->m_name +
      " repaired " + amountStr.str() + " hit points!");
  this->m_hitPoints += amount;
  this->m_energyPoints--;
}

void ClapTrap::log(const std::string& str) const {
  std::cout << this->m_color.setColor(this->m_bgColor, this->m_strColor, str) << std::endl;
}
