/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TerminalColor.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 02:46:22 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/15 02:51:27 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TERMINAL_COLOR_HPP
#define TERMINAL_COLOR_HPP

#include <string>
#include <utility>

enum ColorCode {
  BLACK,
  RED,
  GREEN,
  YELLOW,
  BLUE,
  PURPLE,
  CYAN,
  WHITE,
  ORANGE,
  RESET,
  BG_BLACK,
  BG_RED,
  BG_GREEN,
  BG_YELLOW,
  BG_BLUE,
  BG_PURPLE,
  BG_CYAN,
  BG_WHITE,
  BG_ORANGE,
  BG_RESET,
  TOTAL_COLOR
};

class TerminalColor {
 public:
  ~TerminalColor();

  static TerminalColor& getInstance();

  std::string setColor(ColorCode bg, ColorCode color, const std::string& str) const;

 private:
  TerminalColor();
  TerminalColor(const TerminalColor&);
  TerminalColor& operator=(const TerminalColor&);

  static const std::pair<ColorCode, std::string> COLOR_MAP[];
};

#endif // TERMINAL_COLOR_HPP
