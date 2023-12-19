#ifndef INPUTSHAPESRC_HPP
#define INPUTSHAPESRC_HPP

#include <cstddef>
#include <istream>

#include "Shape.hpp"
#include "ShapeSource.hpp"

using shapeInputFunc = zhalilov::Shape *(*)(const char string[]);
namespace zhalilov
{
  Shape **inputShapesSource(point_t &point, double &ratio, size_t &length, std::istream &input);
  Shape **increaseLength(Shape **shapes, size_t size, size_t delta);
  shapeInputFunc identifyShape(const char string[]);
  bool inputScale(point_t &point, double &ratio, const char string[]);
  Shape *inputRectangle(const char string[]);
}

#endif
