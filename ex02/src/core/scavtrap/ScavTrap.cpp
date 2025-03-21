/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 09:32:16 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/21 20:37:50 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/claptrap/ClapTrap.hpp"
#include "core/scavtrap/ScavTrap.hpp"
#include "utils/TerminalColor.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
  this->m_nameClass = "ScavTrap";
  this->m_attackDamage = SCAVTRAP_ATTACK_DAMAGE;
  this->m_energyPoints = SCAVTRAP_ENERGY_POINTS;
  this->m_hitPoints = SCAVTRAP_HIT_POINTS;
  this->m_bgColor = BG_PURPLE;
  this->m_strColor = WHITE;
  log("Default scavtrap constructor called");
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
  this->m_nameClass = "ScavTrap";
  this->m_attackDamage = SCAVTRAP_ATTACK_DAMAGE;
  this->m_energyPoints = SCAVTRAP_ENERGY_POINTS;
  this->m_hitPoints = SCAVTRAP_HIT_POINTS;
  this->m_bgColor = BG_PURPLE;
  this->m_strColor = WHITE;
  log("Default scavtrap parameterized constructor called");
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
  this->m_nameClass = "ScavTrap";
  this->m_attackDamage = SCAVTRAP_ATTACK_DAMAGE;
  this->m_energyPoints = SCAVTRAP_ENERGY_POINTS;
  this->m_hitPoints = SCAVTRAP_HIT_POINTS;
  this->m_bgColor = BG_PURPLE;
  this->m_strColor = WHITE;
  log("Copy scavtrap constructor called");
}

ScavTrap::~ScavTrap() {
  this->m_nameClass = "ScavTrap";
  this->m_bgColor = BG_PURPLE;
  this->m_strColor = WHITE;
  log("Destructor scavtrap called");
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
  if (this != &other) {
    this->m_bgColor = BG_PURPLE;
    this->m_strColor = WHITE;
    log("Copy assignment " + other.m_nameClass + " operator called");
    this->m_name = other.m_name;
    this->m_nameClass = other.m_nameClass;
    this->m_attackDamage = other.m_attackDamage;
    this->m_energyPoints = other.m_energyPoints;
    this->m_hitPoints = other.m_hitPoints;
  }
  return *this;
}
