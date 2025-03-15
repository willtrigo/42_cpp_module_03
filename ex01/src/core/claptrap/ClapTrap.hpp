/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 02:46:59 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/15 15:44:38 by dande-je         ###   ########.fr       */
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

 protected:
  std::string m_name;
  std::string m_nameClass;
  unsigned int m_attackDamage;
  unsigned int m_energyPoints;
  unsigned int m_hitPoints;
  const TerminalColor& m_color;
  ColorCode m_bgColor;
  ColorCode m_strColor;

  void log(const std::string& str) const;

 private:
  enum ClapTarpEnum {
    CLAPTRAP_ATTACK_DAMAGE,
    CLAPTRAP_ENERGY_POINTS = 10,
    CLAPTRAP_HIT_POINTS = 10,
    DEATH = 0
  };
};

#endif // CLAPTRAP_HPP
