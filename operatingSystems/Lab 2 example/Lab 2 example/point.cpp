// Class Point implementation

#include "Point.h"
#include <cmath>

// Point(): constructor for a Point
Point::Point(float xReceived, float yReceived) {
    x = xReceived;
    y = yReceived;
    
}

// getX: return the X-value
float Point::getX() {
    return x;
}

// getY: return the y-value
float Point::getY() {
    return y;
}

// setX(): set the x-value
void Point::setX(float xIn) {
    x = xIn;
    return;
}

// setY(): set the y-value
void Point::setY(float yIn) {
    x = yIn;
    return;
}

float Point::getDistance() {
    return sqrt(x*x + y*y);
}
