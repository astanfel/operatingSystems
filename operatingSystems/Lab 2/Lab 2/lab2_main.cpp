#include <iostream>
//  main.cpp
//  Lab 2
//
//  Created by Anthony Stanfel  on 8/28/15.
//  Copyright (c) 2015 Anthony Stanfel . All rights reserved.
//
#include "lab2.h"
#include <cmath>

/*int main(int argc, const char * argv[]) {
     // insert code here...
     std::cout << "Hello, World!\n";
     return 0;
 }*/

People::People(string sentName, int xRecieved, int yRecieved){
    theName = sentName;
    x = xRecieved;
    y = yRecieved;
}
void People::setName(string myName){
    theName = myName;
}
string People::getName(){
    return theName;
}

int People::getX(){
    return x;
}

int People::getY(){
    return y;
}
void People::setX(int xIn){
    x = xIn;
    return;
}
void People::setY(int yIn){
    y = yIn;
    return;
}
