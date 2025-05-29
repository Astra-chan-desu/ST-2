// Copyright 2022 UNN-CS
#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_
#include <cstdint>
class Circle {
 public:
    explicit Circle(double radius = 0);
    bool setRadius(double radius);
    bool setFerence(double ference);
    bool setArea(double area);
    double getRadius();
    double getFerence();
    double getArea();
 private:
    double radius;
    double ference;
    double area;
};

#endif  // INCLUDE_CIRCLE_H_
