//
//  point_driver.cpp
//  Lab 3 Example
//
//  Created by Anthony Stanfel  on 9/12/15.
//  Copyright (c) 2015 Anthony Stanfel . All rights reserved.
//

#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include "point.h"

using namespace std;


//find the point farthest from the origin
int main (int argc, char * argv[]) {
    float x, y;
    float farthest= 0;
    cout << "Enter an x and a y value:" << endl;
    cin >> x;
    cin >> y;
    Point myPoint(x,y);
    cout << "myPoint is (" << myPoint.getX() << ", " << myPoint.getY() << ")" << endl;
    cout << "and distance to origin is about " << myPoint.getDistance() << endl;
    farthest = myPoint.getDistance();
    char continueOn = 'Y';
    while (continueOn == 'Y' || continueOn == 'y') {
        cout << "Enter an x and a y value:" << endl;
        cin >> x;
        cin >> y;
        myPoint.setX(x);
        myPoint.setY(y);
        if (myPoint.getDistance() > farthest )	{
            farthest = myPoint.getDistance();
        }
        else if (myPoint.getDistance() == 0){
            cout << "You are at the Origin" << endl;
        }
        else {
            cout << "Keep trying " << endl;
        }
        
        cout << "Enter more points? (Y or N)"  << endl;
        cin >> continueOn;
    }
    cout << "farthest point is a distance of "  << farthest << endl;
    return 0;
}
