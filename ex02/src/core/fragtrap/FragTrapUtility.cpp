/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrapUtility.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 09:36:40 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/20 11:35:00 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/fragtrap/FragTrap.hpp"
#include "utils/TerminalColor.hpp"

void FragTrap::highFivesGuys(void) {
  this->m_strColor = BLACK;
  if (!this->m_hitPoints) {
    this->m_bgColor = BG_RED;
    return log("highFivesGuys: " + this->m_nameClass + " " + this->m_name + " is dead!");
  }
  if (!this->m_energyPoints) {
    this->m_bgColor = BG_BLUE;
    return log("highFivesGuys: " + this->m_nameClass + " " + this->m_name + " has no energy!");
  }

  this->m_bgColor = BG_YELLOW;
  log(this->m_nameClass + " " + this->m_name + " give to you a high-five!");
}
