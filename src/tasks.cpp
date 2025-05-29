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
    double poolRadius = 3;
    double concrete = 1000;
    double fence = 2000;
    return (Circle(poolRadius).getArea()-
    Circle(poolRadius+roadWidth).getArea()
    )*concrete + Circle(poolRadius+roadWidth).getFerence()*fence;
}

