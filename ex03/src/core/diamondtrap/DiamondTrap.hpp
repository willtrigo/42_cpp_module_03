/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:22:15 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/20 16:50:29 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "core/fragtrap/FragTrap.hpp"
#include "core/scavtrap/ScavTrap.hpp"
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap {
 public:
  DiamondTrap();
  DiamondTrap(const std::string& name);
  DiamondTrap(DiamondTrap const& other);
  virtual ~DiamondTrap();

  DiamondTrap& operator=(const DiamondTrap& other);

  void whoAmI();

  using ScavTrap::attack;

 private:
  std::string m_name;

  void _initializeClapTrapName();
};

#endif // DIAMONDTRAP_HPP
