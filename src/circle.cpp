// Copyright 2022 UNN-CS
#define _USE_MATH_DEFINES
#include "circle.h"
#include <cstdint>
#include <cmath>


Circle::Circle(double radius) {
    this->radius = radius;
    this->ference = 2 * M_PI * radius;
    this->area = M_PI * pow(radius, 2);
}
bool Circle::setRadius(double radius) {
    this->radius = radius;
    this->ference = 2*M_PI *radius;
    this->area = M_PI *pow(radius, 2);
    return true;
}
bool Circle::setFerence(double ference) {
    this->ference = ference;
    this->radius = ference / (2 *M_PI);

    this->area = M_PI * pow(radius, 2);
    return true;
}
bool Circle::setArea(double area) {
    this->area = area;
    this->radius = std::sqrt(area/(M_PI));
    this->ference = 2 *M_PI * radius;
    return true;
}
double Circle::getRadius() {
    return this->radius;
}
double Circle::getFerence() {
    return this->ference;
}
double Circle::getArea() {
    return this->area;
}
