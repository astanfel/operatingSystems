#include <iostream>
//  lab2.h
//  Lab 2
//
//  Created by Anthony Stanfel  on 8/28/15.
//  Copyright (c) 2015 Anthony Stanfel . All rights reserved.
//

#ifndef Lab_2_lab2_h
#define Lab_2_lab2_h

using namespace std;

class People {
public:
    People(string sentName = "Junk", int x = 0 , int y = 0);
    int getX();
    int getY();
    void setX(int xIn);
    void setY(int yIn);
    //string name;
    string getName();
    void setName(string);
private:
    int x;
    int y;
    string theName;
};
#endif
