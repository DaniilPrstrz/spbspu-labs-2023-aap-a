#include "rectangle.hpp"

agarkov::Rectangle::Rectangle(const agarkov::point_t left_bottom, constag arkov::point_t right_top):
  left_bottom_(left_bottom),
  right_top_(right_top)
{
  if (!isCorrectRectangle())
  {
    throw std::invalid_argument("Incorrect rectangle argument");
  }
}

bool agarkov::Rectangle::isCorrectRectangle() const
{
  return ((left_bottom_.x < right_top_.x) && (left_bottom_.y < right_top_.y));
}

double agarkov::Rectangle::getArea() const
{
  return getFrameRectangle().height * getFrameRectangle().width;
}

agarkov::rectangle_t agarkov::Rectangle::getFrameRectangle() const
{
  point_t centre_frame_rect = getSegmentCenter(left_bottom_, right_top_);
  double height_frame_rect = right_top_.y - left_bottom_.y;
  double width_frame_rect = right_top_.x - left_bottom_.x;
  return {centre_frame_rect, width_frame_rect, height_frame_rect};
}