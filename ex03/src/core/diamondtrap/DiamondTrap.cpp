/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:21:52 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/23 15:18:26 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/diamondtrap/DiamondTrap.hpp"
#include "core/claptrap/ClapTrap.hpp"
#include "core/fragtrap/FragTrap.hpp"
#include "core/scavtrap/ScavTrap.hpp"
#include "utils/TerminalColor.hpp"

DiamondTrap::DiamondTrap()
  : ClapTrap(),
    FragTrap(),
    ScavTrap() {
  this->m_name = "Unnamed diamond";
  this->m_nameClass = "DiamondTrap";
  this->m_attackDamage = FRAGTRAP_ATTACK_DAMAGE;
  this->m_energyPoints = SCAVTRAP_ENERGY_POINTS;
  this->m_hitPoints = FRAGTRAP_HIT_POINTS;
  this->m_bgColor = BG_BLUE;
  this->m_strColor = YELLOW;
  log("Default diamondtrap constructor called");
}

DiamondTrap::DiamondTrap(const std::string& name)
  : ClapTrap(name + "_clap_name"),
    FragTrap(name),
    ScavTrap(name) {
  this->m_name = name;
  this->m_nameClass = "DiamondTrap";
  this->m_attackDamage = FRAGTRAP_ATTACK_DAMAGE;
  this->m_energyPoints = FRAGTRAP_ENERGY_POINTS;
  this->m_hitPoints = FRAGTRAP_HIT_POINTS;
  this->m_bgColor = BG_BLUE;
  this->m_strColor = YELLOW;
  log("Default diamondtrap parameterized constructor called");
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
  : ClapTrap(other),
    FragTrap(other),
    ScavTrap(other) {
  this->m_name = other.m_name;
  this->m_nameClass = "DiamondTrap";
  this->m_attackDamage = FRAGTRAP_ATTACK_DAMAGE;
  this->m_energyPoints = FRAGTRAP_ENERGY_POINTS;
  this->m_hitPoints = FRAGTRAP_HIT_POINTS;
  this->m_bgColor = BG_BLUE;
  this->m_strColor = YELLOW;
  log("Copy diamondtrap constructor called");
}

DiamondTrap::~DiamondTrap() {
  this->m_nameClass = "DiamondTrap";
  this->m_bgColor = BG_BLUE;
  this->m_strColor = YELLOW;
  log("Destructor diamondtrap called");
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
  if (this != &other) {
    this->m_bgColor = BG_BLUE;
    this->m_strColor = YELLOW;
    log("Copy assignment " + other.m_nameClass + " operator called");
    this->m_name = other.m_name;
    this->m_nameClass = other.m_nameClass;
    this->m_attackDamage = other.m_attackDamage;
    this->m_energyPoints = other.m_energyPoints;
    this->m_hitPoints = other.m_hitPoints;
  }
  return *this;
}
