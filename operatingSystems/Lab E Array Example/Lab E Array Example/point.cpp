//
//  main.cpp
//  Lab E Array Example
//
//  Created by Anthony Stanfel  on 9/28/15.
//  Copyright © 2015 Anthony Stanfel . All rights reserved.
//
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
    y = yIn;
    return;
}

float Point::getDistance() {
    return sqrt(x*x + y*y);
}
