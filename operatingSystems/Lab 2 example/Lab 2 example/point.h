//
//  point.h
//  Lab 2 example
//
//  Created by Anthony Stanfel  on 8/26/15.
//  Copyright (c) 2015 Anthony Stanfel . All rights reserved.
//

//#ifndef Lab_2_example_point_h
//#define Lab_2_example_point_h


// Class Point interface


#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point(float xReceived = 0.0f, float yReceived = 0.0f);
    float getX();
    float getY();
    void setX(float xIn);
    void setY(float yIn);
    float getDistance();
private:
    float x;
    float y;
};
#endif
