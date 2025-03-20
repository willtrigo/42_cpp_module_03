/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 09:33:12 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/20 11:14:31 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "core/claptrap/ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap {
 public:
  ScavTrap();
  ScavTrap(const std::string& name);
  ScavTrap(ScavTrap const& other);
  virtual ~ScavTrap();

  ScavTrap& operator=(const ScavTrap& other);

  void attack(const std::string& target);
  void guardGate();

 private:
  enum ScavTrapEnum {
    SCAVTRAP_HIT_POINTS = 100,
    SCAVTRAP_ENERGY_POINTS = 50,
    SCAVTRAP_ATTACK_DAMAGE = 20
  };
};

#endif // SCAVTRAP_HPP
