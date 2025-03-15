/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapConstructor.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 22:49:51 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/14 23:56:57 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/ClapTrap.hpp"

ClapTrap::ClapTrap()
  : m_name("Unamed"),
    m_attackDamage(CLAPTRAP_ATTACK_DAMAGE),
    m_energyPoints(CLAPTRAP_ENERGY_POINTS),
    m_hitPoints(CLAPTRAP_HIT_POINTS) {
  log("Default constructor called");
}

ClapTrap::ClapTrap(const std::string name)
  : m_name(name),
    m_attackDamage(CLAPTRAP_ATTACK_DAMAGE),
    m_energyPoints(CLAPTRAP_ENERGY_POINTS),
    m_hitPoints(CLAPTRAP_HIT_POINTS) {
  log("Default parameterized constructor called");
}

ClapTrap::ClapTrap(ClapTrap const& other)
  : m_name(other.m_name),
    m_attackDamage(other.m_attackDamage),
    m_energyPoints(other.m_energyPoints),
    m_hitPoints(other.m_energyPoints) {
  log("Copy constructor called");
}

ClapTrap::~ClapTrap() {
  log("Destructor called");
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
  if (this != &other) {
    log("Copy assignment operator called");
    this->m_name = other.m_name;
    this->m_attackDamage = other.m_attackDamage;
    this->m_energyPoints = other.m_energyPoints;
    this->m_hitPoints = other.m_hitPoints;
  }
  return *this;
}
