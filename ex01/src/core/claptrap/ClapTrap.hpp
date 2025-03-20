/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 02:46:59 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/20 11:07:18 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "utils/TerminalColor.hpp"
#include <string>

class ClapTrap {
 public:
  ClapTrap();
  ClapTrap(const std::string& name);
  ClapTrap(ClapTrap const& other);
  virtual ~ClapTrap();

  ClapTrap& operator=(const ClapTrap& other);

  virtual void attack(const std::string& target);
  void beRepaired(unsigned int amount);
  void takeDamage(unsigned int amount);

 protected:
  std::string m_name;
  std::string m_nameClass;
  unsigned int m_attackDamage;
  unsigned int m_energyPoints;
  unsigned int m_hitPoints;
  const TerminalColor& m_color;
  BgColor m_bgColor;
  StrColor m_strColor;

  void log(const std::string& str) const;

 private:
  enum ClapTrapEnum {
    CLAPTRAP_ATTACK_DAMAGE,
    CLAPTRAP_ENERGY_POINTS = 10,
    CLAPTRAP_HIT_POINTS = 10,
    DEATH = 0
  };
};

#endif // CLAPTRAP_HPP
