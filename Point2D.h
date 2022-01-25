#pragma once
#include "UUID.h"

class Point2D {
private:
  std::string _id;
  double _x;
  double _y;

public:
  Point2D(double x, double y) {
    _x = x;
    _y = y;
    _id = uuid::generate_uuid_v4();
  }
  ~Point2D() { }

  double getX() {
    return _x;
  }

  double getY() {
    return _y;
  }

  std::string getId() {
    return _id;
  }
};
