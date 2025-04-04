/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrapUtility.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:43:39 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/20 14:46:56 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/scavtrap/ScavTrap.hpp"
#include "utils/TerminalColor.hpp"
#include <iostream>
#include <sstream>

void ScavTrap::attack(const std::string& target) {
  this->m_strColor = BLACK;
  if (!this->m_hitPoints) {
    this->m_bgColor = BG_RED;
    return log("attack: " + this->m_nameClass + " " + this->m_name + " is dead!");
  }
  if (!this->m_energyPoints) {
    this->m_bgColor = BG_BLUE;
    return log("attack: " + this->m_nameClass + " " + this->m_name + " has no energy!");
  }

  std::ostringstream attackDamageStr;

  this->m_bgColor = BG_ORANGE;
  attackDamageStr << this->m_attackDamage;
  log(this->m_nameClass + " " + this->m_name +
      " attacks " + (target.empty() ? "unnamed" : target) +
      ", causing " + attackDamageStr.str() + " points of damage!");
  this->m_energyPoints--;
}

void ScavTrap::guardGate() {
  this->m_strColor = BLACK;
  if (!this->m_hitPoints) {
    this->m_bgColor = BG_RED;
    return log("guardGate: " + this->m_nameClass + " " + this->m_name + " is dead!");
  }
  if (!this->m_energyPoints) {
    this->m_bgColor = BG_BLUE;
    return log("guardGate: " + this->m_nameClass + " " + this->m_name + " has no energy!");
  }

  this->m_bgColor = BG_GREEN;
  log(this->m_nameClass + " " + this->m_name + " is now in Gate Keeper Mode.");
}
