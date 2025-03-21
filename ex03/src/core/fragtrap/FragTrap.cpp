/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:42:18 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/21 20:39:28 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/claptrap/ClapTrap.hpp"
#include "core/fragtrap/FragTrap.hpp"
#include "utils/TerminalColor.hpp"

FragTrap::FragTrap() : ClapTrap() {
  this->m_nameClass = "FragTrap";
  this->m_attackDamage = FRAGTRAP_ATTACK_DAMAGE;
  this->m_energyPoints = FRAGTRAP_ENERGY_POINTS;
  this->m_hitPoints = FRAGTRAP_HIT_POINTS;
  this->m_bgColor = BG_CYAN;
  this->m_strColor = BLACK;
  log("Default flagtrap constructor called");
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
  this->m_nameClass = "FragTrap";
  this->m_attackDamage = FRAGTRAP_ATTACK_DAMAGE;
  this->m_energyPoints = FRAGTRAP_ENERGY_POINTS;
  this->m_hitPoints = FRAGTRAP_HIT_POINTS;
  this->m_bgColor = BG_CYAN;
  this->m_strColor = BLACK;
  log("Default fragtrap parameterized constructor called");
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
  this->m_nameClass = "FragTrap";
  this->m_attackDamage = FRAGTRAP_ATTACK_DAMAGE;
  this->m_energyPoints = FRAGTRAP_ENERGY_POINTS;
  this->m_hitPoints = FRAGTRAP_HIT_POINTS;
  this->m_bgColor = BG_CYAN;
  this->m_strColor = BLACK;
  log("Copy fragtrap constructor called");
}

FragTrap::~FragTrap() {
  this->m_nameClass = "FragTrap";
  this->m_bgColor = BG_CYAN;
  this->m_strColor = BLACK;
  log("Destructor fragtrap called");
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
  if (this != &other) {
    this->m_bgColor = BG_CYAN;
    this->m_strColor = BLACK;
    log("Copy assignment " + other.m_nameClass + " operator called");
    this->m_name = other.m_name;
    this->m_nameClass = other.m_nameClass;
    this->m_attackDamage = other.m_attackDamage;
    this->m_energyPoints = other.m_energyPoints;
    this->m_hitPoints = other.m_hitPoints;
  }
  return *this;
}
