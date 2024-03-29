#pragma once 

#include <SFML/Graphics.hpp>

namespace CustomColors{
  auto const black          {sf::Color(0, 0, 0, 255)}; 
  auto const green          {sf::Color(47, 230, 23, 255)};
  auto const red            {sf::Color(232, 18, 18, 255)};
  auto const orange         {sf::Color(226, 116, 17, 255)};
  auto const yellow         {sf::Color(237, 234, 4, 255)};
  auto const purple         {sf::Color(166, 0, 247, 255)};
  auto const cyan           {sf::Color(21, 204, 209, 255)};
  auto const blue           {sf::Color(13, 64, 216, 255)};
  auto const dark_grey      {sf::Color(51, 51, 77, 255)};  
  auto const dark_purple    {sf::Color(77, 0, 77, 255)};

  enum Color{
    color_black,
    color_green,
    color_red,
    color_orange,
    color_yellow,
    color_purple,
    color_cyan,
    color_blue,
    color_transparent,    
  };
}

inline sf::Color getSFMLColor (CustomColors::Color color){
  using enum CustomColors::Color;

  switch(color){
    case color_black:     return CustomColors::black;
    case color_green:     return CustomColors::green;
    case color_red:       return CustomColors::red;
    case color_orange:    return CustomColors::orange; 
    case color_yellow:    return CustomColors::yellow;
    case color_purple:    return CustomColors::purple;
    case color_cyan:      return CustomColors::cyan;
    case color_blue:      return CustomColors::blue;
    default:              return sf::Color::Transparent; 
  }
}
