/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrapUtility.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:22:28 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/20 16:50:40 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/claptrap/ClapTrap.hpp"
#include "core/diamondtrap/DiamondTrap.hpp"

void DiamondTrap::whoAmI() {
  log("DiamondTrap name: " + this->m_name + ", ClapTrap name: " + ClapTrap::m_name);
}

void DiamondTrap::_initializeClapTrapName() {
  ClapTrap::m_name = this->m_name + "_clap_name";
}
