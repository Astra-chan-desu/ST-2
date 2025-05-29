//Copyright 2025 Me
#include <tasks.h>
#include <circle.h>
#include <cstdint>

double EarthandRope() {
    Circle TightRope(6378.1);
    Circle LooseRope(6378.101);
    return LooseRope.getRadius() - TightRope.getRadius();
}

double Swimmingpool() {
    double roadWidth = 1;
    double poolRadi = 3;
    double concrete = 1000;
    double fence = 2000;
    return (Circle(poolRadi).getArea()-Circle(poolRadi+roadWidth).getArea())
    *concrete + Circle(poolRadi+roadWidth).getFerence()*fence;
}

