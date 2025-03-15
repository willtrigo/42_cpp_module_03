/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapConstructor.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 02:47:32 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/15 15:55:11 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/claptrap/ClapTrap.hpp"
#include "utils/TerminalColor.hpp"

ClapTrap::ClapTrap()
  : m_name("Unamed"),
    m_nameClass("ClapTrap"),
    m_attackDamage(CLAPTRAP_ATTACK_DAMAGE),
    m_energyPoints(CLAPTRAP_ENERGY_POINTS),
    m_hitPoints(CLAPTRAP_HIT_POINTS),
    m_color(TerminalColor::getInstance()),
    m_bgColor(BG_WHITE),
    m_strColor(BLACK) {
  log("Default claptrap constructor called");
}

ClapTrap::ClapTrap(const std::string name)
  : m_name(name),
    m_nameClass("ClapTrap"),
    m_attackDamage(CLAPTRAP_ATTACK_DAMAGE),
    m_energyPoints(CLAPTRAP_ENERGY_POINTS),
    m_hitPoints(CLAPTRAP_HIT_POINTS),
    m_color(TerminalColor::getInstance()),
    m_bgColor(BG_WHITE),
    m_strColor(BLACK) {
  log("Default claptrap parameterized constructor called");
}

ClapTrap::ClapTrap(ClapTrap const& other)
  : m_name(other.m_name),
    m_nameClass(other.m_nameClass),
    m_attackDamage(other.m_attackDamage),
    m_energyPoints(other.m_energyPoints),
    m_hitPoints(other.m_energyPoints),
    m_color(TerminalColor::getInstance()),
    m_bgColor(BG_WHITE),
    m_strColor(BLACK) {
  log("Copy claptrap constructor called");
}

ClapTrap::~ClapTrap() {
  this->m_bgColor = BG_WHITE;
  this->m_strColor = BLACK;
  log("Destructor claptrap called");
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
  if (this != &other) {
    this->m_bgColor = BG_WHITE;
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
