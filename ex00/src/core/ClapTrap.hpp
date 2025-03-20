/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 22:49:59 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/20 10:57:42 by dande-je         ###   ########.fr       */
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
  void beRepaired(unsigned int amount);
  void takeDamage(unsigned int amount);

 private:
  enum ClapTrapEnum {
    CLAPTRAP_ATTACK_DAMAGE,
    CLAPTRAP_ENERGY_POINTS = 10,
    CLAPTRAP_HIT_POINTS = 10,
    DEATH = 0
  };

  std::string m_name;
  unsigned int m_attackDamage;
  unsigned int m_energyPoints;
  unsigned int m_hitPoints;
  const TerminalColor& m_color;
  BgColor m_bgColor;
  StrColor m_strColor;

  void log(const std::string& str) const;
};

#endif // CLAPTRAP_HPP
