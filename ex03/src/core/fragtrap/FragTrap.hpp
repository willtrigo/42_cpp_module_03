/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:42:15 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/21 20:39:19 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "core/claptrap/ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap {
 public:
  FragTrap(const std::string& name);
  FragTrap(const FragTrap& other);
  virtual ~FragTrap();

  FragTrap& operator=(const FragTrap& other);

  void highFivesGuys(void);

 protected:
  enum FragTrapEnum {
    FRAGTRAP_HIT_POINTS = 100,
    FRAGTRAP_ENERGY_POINTS = 100,
    FRAGTRAP_ATTACK_DAMAGE = 30
  };

  FragTrap();
};

#endif // FRAGTRAP_HPP
