/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:43:28 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/21 20:39:38 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "core/claptrap/ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap {
 public:
  ScavTrap(const std::string& name);
  ScavTrap(const ScavTrap& other);
  virtual ~ScavTrap();

  ScavTrap& operator=(const ScavTrap& other);

  void attack(const std::string& target);
  void guardGate();

 protected:
  enum ScavTrapEnum {
    SCAVTRAP_HIT_POINTS = 100,
    SCAVTRAP_ENERGY_POINTS = 50,
    SCAVTRAP_ATTACK_DAMAGE = 20
  };

  ScavTrap();
};

#endif // SCAVTRAP_HPP
