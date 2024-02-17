#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "shape.hpp"

namespace gladyshev
{
  class Circle: public Shape
  {
    public:
      Circle(const point_t& p1, double radius);
      virtual ~Circle();
      virtual double getArea() const;
      virtual rectangle_t getFrameRect() const;
      virtual void move(double dx, double dy);
      virtual void move(const point_t& pos);
    private:
      double radius_;
      point_t center_;
      virtual void doScale(double factor);
  };
}

#endif
