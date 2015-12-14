//
//  driver.cpp
//  Lab E Array Example
//
//  Created by Anthony Stanfel  on 9/28/15.
//  Copyright © 2015 Anthony Stanfel . All rights reserved.
//

#include <stdio.h>

#include "point.h"
#include <iostream>
#include <algorithm>
using namespace std;

// when is one point < anouther point
bool myComparison (Point p1, Point p2) {
    bool isLessThan = true;
    if ( (p1.getX() > p2.getX() )  || (p1.getX()==p2.getX() && p1.getY() > p2.getY()) )  {
        isLessThan = false;
    }
    return isLessThan;
}

// make an array
int main (int argc, char * argv[]) {
    int const arraySize = 3;
    float userX;
    float userY;
    Point myPoints[arraySize];
    // next time, I will ask the user, but now I will arbitrarily pick 3 values
    for (int i=0; i < arraySize; i++) {
        cout << "Enter and x and y value for array["<<i<<"]" << endl;
        cin >> userX >> userY;
        myPoints[i].setX(userX);
        myPoints[i].setY(userY);
    }
    
    // sort function is from #include <algorithm> but I had to write myComparison function to say when 1 point is less than (or equal to) another point
    sort (myPoints, myPoints+arraySize, myComparison);
    
    // I could have written my own QuickSort functions to sort
    cout << "sorted Array:" << endl;
    for (int i=0; i < arraySize; i++) {
        cout << "(" << myPoints[i].getX() << ", " << myPoints[i].getY() << ")" << endl;
    }
    
    return 0;
}
