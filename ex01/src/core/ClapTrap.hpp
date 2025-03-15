/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 02:46:59 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/15 02:47:40 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "utils/TerminalColor.hpp"
#include <string>

class ClapTrap {
 public:
  ClapTrap();
  ClapTrap(const std::string name);
  ClapTrap(ClapTrap const& other);
  ~ClapTrap();

  ClapTrap& operator=(const ClapTrap& other);

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

 private:
  enum ClapTarpEnum {
    CLAPTRAP_HIT_POINTS = 10,
    CLAPTRAP_ENERGY_POINTS = 10,
    CLAPTRAP_ATTACK_DAMAGE = 0,
    DEATH = 0
  };

  std::string m_name;
  unsigned int m_attackDamage;
  unsigned int m_energyPoints;
  unsigned int m_hitPoints;
  const TerminalColor& m_color;
  ColorCode m_bgColor;
  ColorCode m_strColor;

  void log(const std::string& str) const;
};

#endif // CLAPTRAP_HPP
